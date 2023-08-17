//
// Created by Raphael Russo on 8/11/23.
//

#ifndef IMAGEEDITING_IMAGEIMPL_H
#define IMAGEEDITING_IMAGEIMPL_H

#pragma once
#include "IImage.h"
using namespace std;

class ImageImpl : public IImage {
public:
    ImageImpl(int height, int width, int maxValue)
    : IImage(height, width, maxValue) {}

    ~ImageImpl() = default;

    void setPixel(int x, int y, int r, int g, int b) override final;

    int getHeight() const override final;

    int getWidth() const override final;

    int getMaxValue() const override final;

    int getRedChannel(int x, int y) const override final;

    int getGreenChannel(int x, int y) const override final;

    int getBlueChannel(int x, int y) const override final;
};


#endif //IMAGEEDITING_IMAGEIMPL_H
