//
// Created by Raphael Russo on 8/12/23.
//

#ifndef IMAGEEDITING_WARMCOMMAND_H
#define IMAGEEDITING_WARMCOMMAND_H

#include "ICommand.h"

class WarmCommand : public ICommand {
public:
    WarmCommand() : ICommand() {}
    ~WarmCommand() = default;

    void run(istream& input, IImageDataBase& model) override final;

};


#endif //IMAGEEDITING_WARMCOMMAND_H
