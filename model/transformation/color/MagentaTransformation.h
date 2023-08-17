//
// Created by Raphael Russo on 8/12/23.
//

#ifndef IMAGEEDITING_MAGENTATRANSFORMATION_H
#define IMAGEEDITING_MAGENTATRANSFORMATION_H

#pragma once
#include "AbstractColorTransformation.h"

class MagentaTransformation : public AbstractColorTransformaion {
public:
    MagentaTransformation(vector<vector<double>>
                       matrix = {{1.3, 0.0, 1.3},
                                 {0.0, 0.9, 0.0},
                                 {0.3, 0.0, 1.3}}
    )
            : AbstractColorTransformaion(matrix) {}

    ~MagentaTransformation() {}
};

#endif //IMAGEEDITING_MAGENTATRANSFORMATION_H
