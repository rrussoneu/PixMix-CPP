//
// Created by Raphael Russo on 8/12/23.
//

#ifndef IMAGEEDITING_NEGATIVECOMMAND_H
#define IMAGEEDITING_NEGATIVECOMMAND_H
#pragma once

#include "ICommand.h"

class NegativeCommand : public ICommand {
public:
    NegativeCommand() : ICommand() {}
    ~NegativeCommand() = default;
    void run(istream& input, IImageDataBase& model) override final;
};


#endif //IMAGEEDITING_NEGATIVECOMMAND_H
