//
// Created by Raphael Russo on 9/29/23.
//

#ifndef IMAGEEDITING_HELPCOMMAND_H
#define IMAGEEDITING_HELPCOMMAND_H

#pragma once
#include "ICommand.h"

class HelpCommand : public ICommand {
public:
    HelpCommand() : ICommand() {}
    ~HelpCommand() = default;

    void run(std::istream& input, IImageDataBase& model) override final;

};


#endif //IMAGEEDITING_HELPCOMMAND_H
