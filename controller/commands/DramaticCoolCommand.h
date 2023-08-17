//
// Created by Raphael Russo on 8/12/23.
//

#ifndef IMAGEEDITING_DRAMATICCOOLCOMMAND_H
#define IMAGEEDITING_DRAMATICCOOLCOMMAND_H

#pragma once

#include "ICommand.h"

class DramaticCoolCommand : public ICommand {
public:
    DramaticCoolCommand() : ICommand() {}
    ~DramaticCoolCommand() = default;
    void run(istream& input, IImageDataBase& model) override final;
};


#endif //IMAGEEDITING_DRAMATICCOOLCOMMAND_H
