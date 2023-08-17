//
// Created by Raphael Russo on 8/12/23.
//

#ifndef IMAGEEDITING_COLORBOOSTCOMMAND_H
#define IMAGEEDITING_COLORBOOSTCOMMAND_H
#pragma once

#include "ICommand.h"

class ColorBoostCommand : public ICommand {
public:
    ColorBoostCommand() : ICommand() {}
    ~ColorBoostCommand() = default;
    void run(istream& input, IImageDataBase& model) override final;
};


#endif //IMAGEEDITING_COLORBOOSTCOMMAND_H
