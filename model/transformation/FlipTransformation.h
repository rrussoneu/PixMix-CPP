//
// Created by Raphael Russo on 8/17/23.
//

#ifndef IMAGEEDITING_FLIPTRANSFORMATION_H
#define IMAGEEDITING_FLIPTRANSFORMATION_H
#pragma once

#include "ITransformation.h"

class FlipTransformation : public ITransformation{
private:

public:
    FlipTransformation()
            : ITransformation() {}

    ~FlipTransformation() = default;

    virtual unique_ptr<IImage> apply(IImage& sourceImage) override final;
};



#endif //IMAGEEDITING_FLIPTRANSFORMATION_H
