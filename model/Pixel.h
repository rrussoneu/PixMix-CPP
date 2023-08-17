//
// Created by Raphael Russo on 8/11/23.
//

#ifndef IMAGEEDITING_PIXEL_H
#define IMAGEEDITING_PIXEL_H

#pragma once

#include "IPixel.h"

class Pixel : public IPixel {
public:
    Pixel(int red, int green, int blue, double alpha, int maxValue)
    : IPixel(red, green, blue, alpha, maxValue) {}

    Pixel() : IPixel() {}

    ~Pixel() = default;

    void setRed(int value) override final;

    void setGreen(int value) override final;

    void setBlue(int value) override final;

    int getRed() const override final;

    int getGreen() const override final;

    int getBlue() const override final;

    double getAlpha() const override final;

};


#endif //IMAGEEDITING_PIXEL_H
