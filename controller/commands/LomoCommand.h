//
// Created by Raphael Russo on 8/12/23.
//

#ifndef IMAGEEDITING_LOMOCOMMAND_H
#define IMAGEEDITING_LOMOCOMMAND_H

#pragma once

#include "ICommand.h"

class LomoCommand : public ICommand {
public:
    LomoCommand() : ICommand() {}
    ~LomoCommand() = default;
    void run(istream& input, IImageDataBase& model) override final;
};


#endif //IMAGEEDITING_LOMOCOMMAND_H
