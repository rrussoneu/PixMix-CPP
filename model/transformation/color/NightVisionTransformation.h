//
// Created by Raphael Russo on 8/12/23.
//

#ifndef IMAGEEDITING_NIGHTVISIONTRANSFORMATION_H
#define IMAGEEDITING_NIGHTVISIONTRANSFORMATION_H
#pragma once
#include "AbstractColorTransformation.h"

class NightVisionTransformation : public AbstractColorTransformaion {
public:
    NightVisionTransformation(vector<vector<double>>
                          matrix = {{0.1, 0.2, 0.1},
                                    {0.3, 1.5, 0.3},
                                    {0.1, 0.2, 0.1}}
    )
            : AbstractColorTransformaion(matrix) {}

    ~NightVisionTransformation() {}
};
#endif //IMAGEEDITING_NIGHTVISIONTRANSFORMATION_H
