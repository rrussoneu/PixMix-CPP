//
// Created by Raphael Russo on 8/12/23.
//

#ifndef IMAGEEDITING_COOLCOMMAND_H
#define IMAGEEDITING_COOLCOMMAND_H

#pragma once
#include "ICommand.h"

class CoolCommand : public ICommand {
public:
    CoolCommand() : ICommand() {}

    ~CoolCommand() = default;

    void run(istream &input, IImageDataBase &model) override final;
};


#endif //IMAGEEDITING_COOLCOMMAND_H
