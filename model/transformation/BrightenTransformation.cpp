//
// Created by Raphael Russo on 8/11/23.
//

#include "BrightenTransformation.h"
#include "../ImageImpl.h"

unique_ptr<IImage> BrightenTransformation::apply(IImage &sourceImage) {
    unique_ptr<IImage> newImage = make_unique<ImageImpl>
            ( sourceImage.getHeight(), sourceImage.getWidth(),sourceImage.getMaxValue());
    for (int row = 0; row < sourceImage.getHeight(); ++row) {
        for (int col = 0; col < sourceImage.getWidth(); ++col) {
            int newR = clamp(sourceImage.getRedChannel(row, col) + brightenValue, sourceImage.getMaxValue());
            int newG = clamp(sourceImage.getGreenChannel(row, col) + brightenValue, sourceImage.getMaxValue());
            int newB = clamp(sourceImage.getBlueChannel(row, col) + brightenValue, sourceImage.getMaxValue());
            newImage->setPixel(row, col, newR, newG, newB);
        }
    }

    return move(newImage);
}