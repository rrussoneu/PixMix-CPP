//
// Created by Raphael Russo on 8/11/23.
//

#ifndef IMAGEEDITING_IPIXEL_H
#define IMAGEEDITING_IPIXEL_H

#pragma once

class IPixel {
protected:
    int red;
    int green;
    int blue;
    double alpha;
    int maxValue;

public:
    IPixel(int red, int green, int blue, double alpha, int maxValue)
            : red(red), green(green), blue(blue), alpha(alpha), maxValue(maxValue) {};

    IPixel() : red(0), green(0), blue(0), alpha(0), maxValue(255) {};

    virtual ~IPixel() = default;

    /**
  * Gets the Pixel's red channel value.
  * @return The red channel value.
  */
    virtual int getRed() const = 0;

    /**
     * Gets the Pixel's green channel value.
     * @return The green channel value.
     */
    virtual int getGreen() const = 0;

    /**
     * Gets the Pixel's blue channel value.
     * @return The blue channel value.
     */
    virtual int getBlue() const = 0;

    /**
     * Gets the Pixel's alpha channel value.
     * @return The alpha channel value.
     */
    virtual double getAlpha() const = 0;

    /**
   * Sets the red channel of the pixel to a given value.
   * @param value The red channel value.
   */
    virtual void setRed(int value) = 0;

    /**
     * Sets the green channel of the pixel to a given value.
     * @param value The green channel value.
     */
    virtual void setGreen(int value) = 0;

    /**
     * Sets the blue channel of the pixel to a given value.
     * @param value The blue channel value.
     */
    virtual void setBlue(int value) = 0;


};
#endif //IMAGEEDITING_IPIXEL_H
