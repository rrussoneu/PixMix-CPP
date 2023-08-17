//
// Created by Raphael Russo on 8/12/23.
//

#ifndef IMAGEEDITING_LOMOTRANSFORMATION_H
#define IMAGEEDITING_LOMOTRANSFORMATION_H
#pragma once
#include "AbstractColorTransformation.h"

class LomoTransformation : public AbstractColorTransformaion {
public:
    LomoTransformation(vector<vector<double>>
                              matrix = {{1.5, 0.1, 0.5},
                                        {0.1, 1.25, 0.1},
                                        {0.2, 0.1, 1.25}}
    )
            : AbstractColorTransformaion(matrix) {}

    ~LomoTransformation() {}
};
#endif //IMAGEEDITING_LOMOTRANSFORMATION_H
