//
// Created by Raphael Russo on 8/12/23.
//

#ifndef IMAGEEDITING_MAGENTACOMMAND_H
#define IMAGEEDITING_MAGENTACOMMAND_H

#pragma once

#include "ICommand.h"

class MagentaCommand : public ICommand {
public:
    MagentaCommand() : ICommand() {}
    ~MagentaCommand() = default;
    void run(istream& input, IImageDataBase& model) override final;
};


#endif //IMAGEEDITING_MAGENTACOMMAND_H
