//
// Created by Raphael Russo on 8/12/23.
//

#ifndef IMAGEEDITING_TEXTVIEW_H
#define IMAGEEDITING_TEXTVIEW_H

#pragma once
#include "IView.h"

class TextView : public IView {
public:
    TextView() : IView() {}
    ~TextView() {}

    void writeMessage(std::string msg) const override final;
};


#endif //IMAGEEDITING_TEXTVIEW_H
