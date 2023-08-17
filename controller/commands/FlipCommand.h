//
// Created by Raphael Russo on 8/17/23.
//

#ifndef IMAGEEDITING_FLIPCOMMAND_H
#define IMAGEEDITING_FLIPCOMMAND_H

#pragma once
#include "ICommand.h"

class FlipCommand : public ICommand {
public:
    FlipCommand() : ICommand() {}
    ~FlipCommand() = default;
    void run(istream& input, IImageDataBase& model) override final;
};


#endif //IMAGEEDITING_FLIPCOMMAND_H
