//
// Created by Raphael Russo on 8/11/23.
//

#ifndef IMAGEEDITING_IIMAGE_H
#define IMAGEEDITING_IIMAGE_H

#pragma once
#include "memory"
#include "vector"
#include "Pixel.h"

using namespace std;

class IImage {
protected:
    int HEIGHT;
    int WIDTH;
    int MAXVALUE;
    vector<vector<unique_ptr<IPixel>>> data;

public:
    IImage(int height, int width, int maxValue)
            : HEIGHT(height), WIDTH(width), MAXVALUE(maxValue) {
        data.resize(HEIGHT);
        for (int i = 0; i < height; ++i) {
            data.at(i).resize(WIDTH);
            for (int j = 0; j < WIDTH; ++j) {
                data[i][j] = make_unique<Pixel>();
            }
        }
    }

    virtual ~IImage() = default;
    /**
    * Sets a Pixel at a given location to the given red, blue, and green channel values.
    * @param x X coordinate of Pixel.
    * @param y Y coordinate of Pixel.
    * @param r Red channel value.
    * @param g Green channel value.
    * @param b Blue channel value.
    */
    virtual void setPixel(int x, int y, int r, int g, int b) = 0;

    /**
     * Gets the image's height.
     * @return The height of the image.
     */
    virtual int getHeight() const = 0;

    /**
     * Gets the image's width.
     * @return The width of the image.
     */
    virtual int getWidth() const = 0;

    /**
     * Gets the maximum possible value for a pixel in the image.
     * @return The value.
     */
    virtual int getMaxValue() const = 0;

    /**
   * Gets the image's red channel value of a given pixel.
   * @param x X coordinate of pixel.
   * @param y Y coordinate of pixel.
   * @return The red channel value.
   */
    virtual int getRedChannel(int x, int y) const = 0;

    /**
     * Gets the image's green channel value of a given pixel.
     * @param x X coordinate of pixel.
     * @param y Y coordinate of pixel.
     * @return The green channel value.
     */
    virtual int getGreenChannel(int x, int y) const = 0;

    /**
     * Gets the image's blue channel value of a given pixel.
     * @param x X coordinate of pixel.
     * @param y Y coordinate of pixel.
     * @return The blue channel value.
     */
    virtual int getBlueChannel(int x, int y) const = 0;
};

#endif //IMAGEEDITING_IIMAGE_H
