//
// Created by Raphael Russo on 8/12/23.
//

#ifndef IMAGEEDITING_COLORBOOSTTRANSFORMATION_H
#define IMAGEEDITING_COLORBOOSTTRANSFORMATION_H
#pragma once
#include "AbstractColorTransformation.h"

class ColorBoostTransformation : public AbstractColorTransformaion {
public:
    ColorBoostTransformation(vector<vector<double>>
                              matrix = {{1.3, 0.1, 0.2},
                                        {0.1, 1.3, 0.1},
                                        {0.1, 0.1, 1.3}}
    )
            : AbstractColorTransformaion(matrix) {}

    ~ColorBoostTransformation() {}
};
#endif //IMAGEEDITING_COLORBOOSTTRANSFORMATION_H
