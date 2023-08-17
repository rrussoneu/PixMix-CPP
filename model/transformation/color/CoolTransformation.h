//
// Created by Raphael Russo on 8/12/23.
//

#ifndef IMAGEEDITING_COOLTRANSFORMATION_H
#define IMAGEEDITING_COOLTRANSFORMATION_H
#pragma once
#include "AbstractColorTransformation.h"

class CoolTransformation : public AbstractColorTransformaion {
public:
    CoolTransformation(vector<vector<double>>
                       matrix = {{0.7, 0.1, 0.1},
                                 {0.2, 0.7, 0.2},
                                 {0.2, 0.2, 1.5}}
    )
            : AbstractColorTransformaion(matrix) {}

    ~CoolTransformation() {}
};
#endif //IMAGEEDITING_COOLTRANSFORMATION_H
