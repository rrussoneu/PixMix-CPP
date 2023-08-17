//
// Created by Raphael Russo on 8/12/23.
//

#include "MagentaCommand.h"
#include "../../model/transformation/color/MagentaTransformation.h"
#include "iostream"
#include "sstream"

void MagentaCommand::run(std::istream& input, IImageDataBase &model) {
    std::string srcImageName;
    std::string destImageName;
    std::string line;
    if (!std::getline(input, line)) {
        throw std::invalid_argument("Failed to read command.\n");
    }

    std::istringstream lineStream(line);

    if (!(lineStream >> srcImageName >> destImageName)) {
        throw std::invalid_argument("Invalid command arguments.\n");
    }

    unique_ptr<ITransformation> magenta = make_unique<MagentaTransformation>();
    model.applyTransformation(move(magenta), srcImageName, destImageName);
}