//
// Created by Raphael Russo on 8/11/23.
//

#include "BlurCommand.h"
#include "../../model/transformation/kernel/BlurTransformation.h"
#include "iostream"
#include "sstream"


void BlurCommand::run(std::istream& input, IImageDataBase &model) {
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

    unique_ptr<ITransformation> blur = make_unique<BlurTransformation>();

    model.applyTransformation(move(blur), srcImageName, destImageName);
}