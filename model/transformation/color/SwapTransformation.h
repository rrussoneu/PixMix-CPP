//
// Created by Raphael Russo on 8/12/23.
//

#ifndef IMAGEEDITING_SWAPTRANSFORMATION_H
#define IMAGEEDITING_SWAPTRANSFORMATION_H
#pragma once
#include "AbstractColorTransformation.h"

class SwapTransformation : public AbstractColorTransformaion {
public:
    SwapTransformation(vector<vector<double>>
    matrix = {{0.0, 1.0, 0.0},
              {0.0, 0.0, 1.0},
              {1.0, 0.0, 0.0}}
    )
    : AbstractColorTransformaion(matrix) {}

    ~SwapTransformation() {}
};
#endif //IMAGEEDITING_SWAPTRANSFORMATION_H
