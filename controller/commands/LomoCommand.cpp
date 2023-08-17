//
// Created by Raphael Russo on 8/12/23.
//

#include "LomoCommand.h"
#include "../../model/transformation/color/LomoTransformation.h"
#include "iostream"
#include "sstream"

void LomoCommand::run(std::istream& input, IImageDataBase &model) {
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

    unique_ptr<ITransformation> lomo = make_unique<LomoTransformation>();
    model.applyTransformation(move(lomo), srcImageName, destImageName);
}