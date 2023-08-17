//
// Created by Raphael Russo on 8/12/23.
//

#include "SharpenCommand.h"
#include "../../model/transformation/kernel/SharpenTransformation.h"
#include "iostream"
#include "sstream"


void SharpenCommand::run(std::istream& input, IImageDataBase &model) {
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

    unique_ptr<ITransformation> sharp = make_unique<SharpenTransformation>();

    model.applyTransformation(move(sharp), srcImageName, destImageName);
}