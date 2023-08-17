//
// Created by Raphael Russo on 8/12/23.
//

#include "PosterizeTransformation.h"
#include "../ImageImpl.h"

unique_ptr<IImage> PosterizeTransformation::apply(IImage &sourceImage) {
    unique_ptr<IImage> newImage = make_unique<ImageImpl>
            ( sourceImage.getHeight(), sourceImage.getWidth(),sourceImage.getMaxValue());
    for (int row = 0; row < sourceImage.getHeight(); ++row) {
        for (int col = 0; col < sourceImage.getWidth(); ++col) {
            int newR = clamp(posterizeValue(sourceImage.getRedChannel(row, col)), sourceImage.getMaxValue());
            int newG = clamp(posterizeValue(sourceImage.getGreenChannel(row, col)), sourceImage.getMaxValue());
            int newB = clamp(posterizeValue(sourceImage.getBlueChannel(row, col)), sourceImage.getMaxValue());
            newImage->setPixel(row, col, newR, newG, newB);
        }
    }

    return move(newImage);
}