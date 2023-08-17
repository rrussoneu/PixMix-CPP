//
// Created by Raphael Russo on 8/17/23.
//

#include "FlipTransformation.h"
#include "../ImageImpl.h"

unique_ptr<IImage> FlipTransformation::apply(IImage &sourceImage) {
    unique_ptr<IImage> newImage = make_unique<ImageImpl>
            ( sourceImage.getHeight(), sourceImage.getWidth(),sourceImage.getMaxValue());
    int maxIdx = sourceImage.getWidth() / 2;

    for (int row = 0; row < sourceImage.getHeight(); ++row) {
        for (int col = 0; col < maxIdx; ++col) {
            int tempR = clamp(sourceImage.getRedChannel(row, col), sourceImage.getMaxValue());
            int tempG = clamp(sourceImage.getGreenChannel(row, col), sourceImage.getMaxValue());
            int tempB = clamp(sourceImage.getBlueChannel(row, col), sourceImage.getMaxValue());

            int newR = clamp(sourceImage.getRedChannel(row,  sourceImage.getWidth() - col - 1), sourceImage.getMaxValue());
            int newG = clamp(sourceImage.getGreenChannel(row, sourceImage.getWidth() - col - 1), sourceImage.getMaxValue());
            int newB = clamp(sourceImage.getBlueChannel(row, sourceImage.getWidth() - col - 1), sourceImage.getMaxValue());
            newImage->setPixel(row, col, newR, newG, newB);
            newImage->setPixel(row, sourceImage.getWidth() - col - 1, tempR, tempG, tempB);
        }
    }

    return move(newImage);
}