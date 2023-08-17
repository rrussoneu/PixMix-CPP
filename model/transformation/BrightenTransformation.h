//
// Created by Raphael Russo on 8/11/23.
//

#ifndef IMAGEEDITING_BRIGHTENTRANSFORMATION_H
#define IMAGEEDITING_BRIGHTENTRANSFORMATION_H

#pragma once
#include "ITransformation.h"

class BrightenTransformation : public ITransformation{
private:
    int brightenValue;

public:
    BrightenTransformation(int brightenValue)
    : brightenValue(brightenValue), ITransformation() {}

    ~BrightenTransformation() = default;

    virtual unique_ptr<IImage> apply(IImage& sourceImage) override final;
};


#endif //IMAGEEDITING_BRIGHTENTRANSFORMATION_H
