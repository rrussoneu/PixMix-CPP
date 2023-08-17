//
// Created by Raphael Russo on 8/12/23.
//

#ifndef IMAGEEDITING_ABSTRACTCOLORTRANSFORMATION_H
#define IMAGEEDITING_ABSTRACTCOLORTRANSFORMATION_H
#pragma once
#include "vector"
#include "../ITransformation.h"
#include "../../ImageImpl.h"

using namespace std;
class AbstractColorTransformaion : public ITransformation {
protected:
    vector<vector<double>> matrix;

public:
    AbstractColorTransformaion(vector<vector<double>> matrix)
            :ITransformation(), matrix(matrix) {}

    virtual ~AbstractColorTransformaion() = default;

    unique_ptr<IImage> apply(IImage &sourceImage) override final {
        unique_ptr<IImage> newImage = make_unique<ImageImpl>
                ( sourceImage.getHeight(), sourceImage.getWidth(),sourceImage.getMaxValue());
        for (int row = 0; row < sourceImage.getHeight(); ++row) {
            for (int col = 0; col < sourceImage.getWidth(); ++col) {
                int channelValues[3] = {sourceImage.getRedChannel(row, col),sourceImage.getGreenChannel(row, col),
                                       sourceImage.getBlueChannel(row, col)};
                int newChannelValues[3] = {0,0,0}; // new red, green, blue
                for (int k = 0; k < 3; k++) {
                    double curr = newChannelValues[k]; // the value to operate on red, green, blue
                    for (int n = 0; n < matrix.size(); n++) {
                        curr += (channelValues[n] * matrix[k][n]);

                    }
                    newChannelValues[k] = clamp(static_cast<int> (curr), sourceImage.getMaxValue());
                }
                newImage->setPixel(row, col, newChannelValues[0],
                                  newChannelValues[1], newChannelValues[2]);

            }
        }

        return move(newImage);
    }
};
#endif //IMAGEEDITING_ABSTRACTCOLORTRANSFORMATION_H
