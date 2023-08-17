//
// Created by Raphael Russo on 8/11/23.
//

#ifndef IMAGEEDITING_BLURTRANSFORMATION_H
#define IMAGEEDITING_BLURTRANSFORMATION_H
#pragma once
#include "AbstractKernelTransformation.h"

class BlurTransformation : public AbstractKernelTransformation {

public:
    BlurTransformation(vector<vector<double>> matrix = {{1.0 / 16, 2.0 / 16, 1.0 / 16},
        {2.0 / 16, 4.0 / 16, 2.0 / 16},
        {1.0 / 16, 2.0 / 16, 1.0 / 16}})
    : AbstractKernelTransformation(matrix) {}

    ~BlurTransformation() = default;

};
#endif //IMAGEEDITING_BLURTRANSFORMATION_H
