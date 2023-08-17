//
// Created by Raphael Russo on 8/12/23.
//

#ifndef IMAGEEDITING_POSTERIZETRANSFORMATION_H
#define IMAGEEDITING_POSTERIZETRANSFORMATION_H


#pragma once
#include "ITransformation.h"

class PosterizeTransformation : public ITransformation{
private:
    int posterizeValue(int value) {
        int step = 256/4;
        return ((value/step) * step) + (step/2);
    }

public:
    PosterizeTransformation() : ITransformation() {}

    ~PosterizeTransformation() = default;

    virtual unique_ptr<IImage> apply(IImage& sourceImage) override final;
};


#endif //IMAGEEDITING_POSTERIZETRANSFORMATION_H
