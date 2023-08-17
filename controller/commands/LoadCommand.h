//
// Created by Raphael Russo on 8/11/23.
//

#ifndef IMAGEEDITING_LOADCOMMAND_H
#define IMAGEEDITING_LOADCOMMAND_H

#pragma once

#include "ICommand.h"

class LoadCommand : public ICommand {
public:
    LoadCommand() : ICommand() {}
    ~LoadCommand() = default;

    void run(std::istream& input, IImageDataBase& model) override final;
};


#endif //IMAGEEDITING_LOADCOMMAND_H
