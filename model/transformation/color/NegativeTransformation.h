//
// Created by Raphael Russo on 8/12/23.
//

#ifndef IMAGEEDITING_NEGATIVETRANSFORMATION_H
#define IMAGEEDITING_NEGATIVETRANSFORMATION_H

#pragma once

#include "AbstractColorTransformation.h"

class NegativeTransformation : public AbstractColorTransformaion {
public:
    NegativeTransformation(vector<vector<double>>
                            matrix = {{-1.0, 0.0, 0.0},
                                      {0.0, -1.0, 0.0},
                                      {0.0, 0.0, 1.0}}
    )
            : AbstractColorTransformaion(matrix) {}

    ~NegativeTransformation() {}
};


#endif //IMAGEEDITING_NEGATIVETRANSFORMATION_H
