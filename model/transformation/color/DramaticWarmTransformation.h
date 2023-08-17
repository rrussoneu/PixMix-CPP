//
// Created by Raphael Russo on 8/12/23.
//

#ifndef IMAGEEDITING_DRAMATICWARMTRANSFORMATION_H
#define IMAGEEDITING_DRAMATICWARMTRANSFORMATION_H

#pragma once

#include "AbstractColorTransformation.h"

class DramaticWarmTransformation : public AbstractColorTransformaion {
public:
    DramaticWarmTransformation(vector<vector<double>>
                           matrix = {{1.2, 0.3, -0.3},
                                     {-0.2, 1.3, 0.1},
                                     {-0.2, -0.1, 1.5}}
    )
            : AbstractColorTransformaion(matrix) {}

    ~DramaticWarmTransformation() {}
};

#endif //IMAGEEDITING_DRAMATICWARMTRANSFORMATION_H
