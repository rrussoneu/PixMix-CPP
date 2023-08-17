//
// Created by Raphael Russo on 8/11/23.
//

#ifndef IMAGEEDITING_ABSTRACTKERNELTRANSFORMATION_H
#define IMAGEEDITING_ABSTRACTKERNELTRANSFORMATION_H

#pragma once
#include <iostream>
#include "../ITransformation.h"
#include "../../ImageImpl.h"

using namespace std;
class AbstractKernelTransformation : public ITransformation {
protected:
    vector<vector<double>> matrix;
    int center;

    virtual void applyKernel(IImage& sourceImage, IImage& destImage, int row, int col, int height, int width) {
        double totalRed = 0;
        double totalGreen = 0;
        double totalBlue = 0;
        int localI = 0;
        for (int i = row - center; i < row + center + 1; ++i) {
            int localJ = 0;
            for (int j = col - center; j < col + center + 1; ++j) {
                if ((i >= 0 && i < height) && (j >= 0 && j < width)) {
                    double val = matrix[localI][localJ];
                    double oldPixelRed =  static_cast<double>(sourceImage.getRedChannel(i, j));
                    double oldPixelGreen = static_cast<double>(sourceImage.getGreenChannel(i, j));
                    double oldPixelBlue = static_cast<double>(sourceImage.getBlueChannel(i, j));
                    totalRed += oldPixelRed * val;
                    totalGreen += oldPixelGreen * val;
                    totalBlue += oldPixelBlue * val;
                }
                ++localJ;
            }
            ++localI;
        }

        int finalRed = clamp(static_cast<int>(totalRed), sourceImage.getMaxValue());
        int finalGreen = clamp(static_cast<int>(totalGreen), sourceImage.getMaxValue());
        int finalBlue = clamp(static_cast<int>(totalBlue), sourceImage.getMaxValue());
        destImage.setPixel(row, col, finalRed, finalGreen, finalBlue);
    }
public:
    AbstractKernelTransformation(vector<vector<double>> matrix)
    :ITransformation(), matrix(matrix), center(matrix.size() / 2) {}

    virtual ~AbstractKernelTransformation() = default;

    unique_ptr<IImage> apply(IImage &sourceImage) override final {
        unique_ptr<IImage> newImage = make_unique<ImageImpl>
                ( sourceImage.getHeight(), sourceImage.getWidth(),sourceImage.getMaxValue());
        for (int row = 0; row < sourceImage.getHeight(); ++row) {
            for (int col = 0; col < sourceImage.getWidth(); ++col) {
                applyKernel(sourceImage, *newImage, row, col, sourceImage.getHeight(), sourceImage.getWidth());
            }
        }
        std::cout << newImage << std::endl;
        return move(newImage);
    }
};
#endif //IMAGEEDITING_ABSTRACTKERNELTRANSFORMATION_H
