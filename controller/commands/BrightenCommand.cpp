//
// Created by Raphael Russo on 8/11/23.
//

#include "BrightenCommand.h"
#include "../../model/transformation/BrightenTransformation.h"
#include "iostream"
#include "string"
#include "sstream"

void BrightenCommand::run(std::istream& input, IImageDataBase& model) {
    int brightenValue = 0;
    std::string line;
    std::string brightenValueStr;
    std::string srcImageName;
    std::string destImageName;

    if (!std::getline(input, line)) {
        throw std::invalid_argument("Failed to read command.\n");
    }
    std::istringstream lineStream(line);
    if (!(lineStream >> brightenValueStr >> srcImageName >> destImageName)) {
        throw std::invalid_argument("Invalid command arguments.\n");
    }

    try {
        brightenValue = std::stoi(brightenValueStr);
    } catch (std::exception& e) {
        throw std::invalid_argument("Brighten value must be an int.\n");
    }

    unique_ptr<ITransformation> brighten = make_unique<BrightenTransformation>(brightenValue);

    model.applyTransformation(move(brighten), srcImageName, destImageName);
}