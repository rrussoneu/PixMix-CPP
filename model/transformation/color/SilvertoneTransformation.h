//
// Created by Raphael Russo on 8/12/23.
//

#ifndef IMAGEEDITING_SILVERTONETRANSFORMATION_H
#define IMAGEEDITING_SILVERTONETRANSFORMATION_H

#pragma once

#include "AbstractColorTransformation.h"

class SilvertoneTransformation : public AbstractColorTransformaion {
public:
    SilvertoneTransformation(vector<vector<double>>
                           matrix = {{0.3, 0.6, 0.1},
                                     {0.3, 0.6, 0.1},
                                     {0.3, 0.6, 0.1}}
    )
            : AbstractColorTransformaion(matrix) {}

    ~SilvertoneTransformation() {}
};


#endif //IMAGEEDITING_SILVERTONETRANSFORMATION_H
