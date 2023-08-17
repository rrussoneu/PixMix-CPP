//
// Created by Raphael Russo on 8/12/23.
//

#include "SaturationCommand.h"
#include "../../model/transformation/saturation/SaturationTransformation.h"
#include "iostream"
#include "string"
#include "sstream"

void SaturationCommand::run(std::istream& input, IImageDataBase& model) {
    double saturationValue = 0.0;
    std::string line;
    std::string saturationValueStr;
    std::string srcImageName;
    std::string destImageName;

    if (!std::getline(input, line)) {
        throw std::invalid_argument("Failed to read command.\n");
    }
    std::istringstream lineStream(line);
    if (!(lineStream >> saturationValueStr >> srcImageName >> destImageName)) {
        throw std::invalid_argument("Invalid command arguments.\n");
    }

    try {
        saturationValue = std::stoi(saturationValueStr);
    } catch (std::exception& e) {
        throw std::invalid_argument("Saturation value must be a double.\n");
    }

    unique_ptr<ITransformation> saturation = make_unique<SaturationTransformation>(saturationValue);

    model.applyTransformation(move(saturation), srcImageName, destImageName);
}