//
// Created by Raphael Russo on 8/12/23.
//

#ifndef IMAGEEDITING_SILVERTONECOMMAND_H
#define IMAGEEDITING_SILVERTONECOMMAND_H

#pragma once

#include "ICommand.h"

class SilvertoneCommand : public ICommand {
public:
    SilvertoneCommand() : ICommand() {}
    ~SilvertoneCommand() = default;
    void run(istream& input, IImageDataBase& model) override final;
};


#endif //IMAGEEDITING_SILVERTONECOMMAND_H
