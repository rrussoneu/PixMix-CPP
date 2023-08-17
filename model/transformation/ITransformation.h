//
// Created by Raphael Russo on 8/11/23.
//

#ifndef IMAGEEDITING_ITRANSFORMATION_H
#define IMAGEEDITING_ITRANSFORMATION_H
#pragma once

#include "memory"
#include "../IImage.h"
using namespace std;

class ITransformation {
protected:
    int clamp(int value, int maxValue) {
        if (value < 0) {
            return 0;
        }
        if (value > maxValue) {
            return maxValue;
        }
        return value;
    }
public:
    ITransformation() {}
    virtual ~ITransformation() = default;
    virtual unique_ptr<IImage> apply(IImage& sourceImage) = 0;
};
#endif //IMAGEEDITING_ITRANSFORMATION_H
