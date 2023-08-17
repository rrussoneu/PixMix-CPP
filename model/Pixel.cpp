//
// Created by Raphael Russo on 8/11/23.
//

#include "Pixel.h"

void Pixel::setRed(int value) {
    red = value;
}

void Pixel::setGreen(int value) {
    green = value;
}

void Pixel::setBlue(int value) {
    blue = value;
}

int Pixel::getRed() const {
    return red;
}

int Pixel::getGreen() const {
    return green;
}

int Pixel::getBlue() const {
    return blue;
}

double Pixel::getAlpha() const {
    return alpha;
}