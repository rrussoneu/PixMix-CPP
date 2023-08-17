//
// Created by Raphael Russo on 8/11/23.
//

#include "ImageImpl.h"

int ImageImpl::getRedChannel(int x, int y) const {
    return data[x][y] -> getRed();
}

int ImageImpl::getGreenChannel(int x, int y) const {
    return data[x][y] -> getGreen();
}

int ImageImpl::getBlueChannel(int x, int y) const {
    return data[x][y] -> getBlue();
}

int ImageImpl::getMaxValue() const {
    return MAXVALUE;
}

int ImageImpl::getHeight() const {
    return HEIGHT;
}

int ImageImpl::getWidth() const {
    return WIDTH;
};

void ImageImpl::setPixel(int x, int y, int r, int g, int b) {
    data[x][y] ->setRed(r);
    data[x][y] ->setGreen(g);
    data[x][y] ->setBlue(b);

}

