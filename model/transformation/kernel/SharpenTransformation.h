//
// Created by Raphael Russo on 8/12/23.
//

#ifndef IMAGEEDITING_SHARPENTRANSFORMATION_H
#define IMAGEEDITING_SHARPENTRANSFORMATION_H

#pragma once
#include "AbstractKernelTransformation.h"

class SharpenTransformation : public AbstractKernelTransformation {

public:
    SharpenTransformation(vector<vector<double>> matrix = {{-1.0/8, -1.0/8, -1.0/8, -1.0/8, -1.0/8},
                                                           {-1.0/8, 1.0/4, 1.0/4, 1.0/4, -1.0/8},
                                                           {-1.0/8, 1.0/4, 1.0/1.0, 1.0/4, -1.0/8,},
                                                           {-1.0/8, 1.0/4, 1.0/4, 1.0/4, -1.0/8},
                                                           {-1.0/8, -1.0/8, -1.0/8, -1.0/8, -1.0/8,}})
            : AbstractKernelTransformation(matrix) {}

    ~SharpenTransformation() = default;

};

#endif //IMAGEEDITING_SHARPENTRANSFORMATION_H
