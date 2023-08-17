//
// Created by Raphael Russo on 8/12/23.
//

#ifndef IMAGEEDITING_WARMTRANSFORMATION_H
#define IMAGEEDITING_WARMTRANSFORMATION_H
#pragma once
#include "AbstractColorTransformation.h"

class WarmTransformation : public AbstractColorTransformaion {
public:
    WarmTransformation(vector<vector<double>>
                       matrix = {{1.5, 0.1, 0.1},
                                 {0.2, 0.9, 0.2},
                                 {0.2, 0.2, 0.9}}
    )
            : AbstractColorTransformaion(matrix) {}

    ~WarmTransformation() {}
};
#endif //IMAGEEDITING_WARMTRANSFORMATION_H
