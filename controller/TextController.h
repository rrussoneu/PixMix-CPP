//
// Created by Raphael Russo on 8/11/23.
//

#ifndef IMAGEEDITING_TEXTCONTROLLER_H
#define IMAGEEDITING_TEXTCONTROLLER_H

#pragma once
#include "IController.h"

class TextController : public IController {
protected:
    void writeMessage(std::string msg) const override final;

public:
    TextController(unique_ptr<IImageDataBase> model, unique_ptr<IView> view) : IController(move(model), move(view)) {}
    ~TextController() = default;

    void run(istream& input) override final;
};


#endif //IMAGEEDITING_TEXTCONTROLLER_H
