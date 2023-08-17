//
// Created by Raphael Russo on 8/12/23.
//

#ifndef IMAGEEDITING_SATURATIONTRANSFORMATION_H
#define IMAGEEDITING_SATURATIONTRANSFORMATION_H
#pragma once
#include "AbstractSaturationTransformation.h"
#include "../../ImageImpl.h"
#include "iostream"

class SaturationTransformation : public AbstractSaturationTransformation {

public:
    SaturationTransformation(int saturationPercent)
            : AbstractSaturationTransformation(saturationPercent) {}

    ~SaturationTransformation() = default;

    unique_ptr<IImage> apply(IImage& sourceImage) override final {
        unique_ptr<IImage> newImage = make_unique<ImageImpl>
                ( sourceImage.getHeight(), sourceImage.getWidth(),sourceImage.getMaxValue());
        for (int row = 0; row < sourceImage.getHeight(); ++row) {
            for (int col = 0; col < sourceImage.getWidth(); ++col) {
                vector<double> hsv = convertToHSV(sourceImage.getRedChannel(row, col), sourceImage.getGreenChannel(row,col), sourceImage.getBlueChannel(row, col));

                hsv[1] *= (1.0 + saturationValue);
                hsv[1] = clampSaturation(hsv[1]);
                vector<int> rgb = convertToRGB(hsv[0], hsv[1], hsv[2]);
                int newR = clamp(rgb[0], sourceImage.getMaxValue());
                int newG = clamp(rgb[1], sourceImage.getMaxValue());
                int newB = clamp(rgb[2], sourceImage.getMaxValue());
                newImage->setPixel(row, col, newR, newG, newB);
            }
        }

        return move(newImage);
    }
};
#endif //IMAGEEDITING_SATURATIONTRANSFORMATION_H
