//
// Created by Raphael Russo on 8/12/23.
//

#ifndef IMAGEEDITING_RETROTRANSFORMATION_H
#define IMAGEEDITING_RETROTRANSFORMATION_H

#pragma once
#include "AbstractSaturationTransformation.h"

class RetroTransformation : public AbstractSaturationTransformation {
public:
    RetroTransformation() : AbstractSaturationTransformation(.1) {}
    ~RetroTransformation() = default;
};


#endif //IMAGEEDITING_RETROTRANSFORMATION_H
