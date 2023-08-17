//
// Created by Raphael Russo on 8/11/23.
//

#ifndef IMAGEEDITING_ICONTROLLER_H
#define IMAGEEDITING_ICONTROLLER_H

#pragma once

#include "string"
#include "unordered_map"
#include "commands/BrightenCommand.h"
#include "commands/LoadCommand.h"
#include "commands/SaveCommand.h"
#include "commands/BlurCommand.h"
#include "commands/SepiaCommand.h"
#include "commands/GreyscaleCommand.h"
#include "commands/DramaticCommand.h"
#include "commands/DramaticWarmCommand.h"
#include "commands/DramaticCoolCommand.h"
#include "commands/NegativeCommand.h"
#include "commands/SilvertoneCommand.h"
#include "commands/LomoCommand.h"
#include "commands/MagentaCommand.h"
#include "commands/NightVisionCommand.h"
#include "commands/SharpenCommand.h"
#include "commands/ColorBoostCommand.h"
#include "commands/CoolCommand.h"
#include "commands/WarmCommand.h"
#include "commands/SwapCommand.h"
#include "commands/PosterizeCommand.h"
#include "commands/SaturationCommand.h"
#include "../view/IView.h"

class IController {
protected:
    unordered_map<string, unique_ptr<ICommand>> commands;
    unique_ptr<IImageDataBase> MODEL;
    unique_ptr<IView> VIEW;
    bool initialLoad;

    virtual void writeMessage(std::string msg) const = 0;

public:
    IController(unique_ptr<IImageDataBase> model, unique_ptr<IView> view) : MODEL(move(model)), VIEW(move(view)){
        initialLoad = false;
        commands["brighten"] = make_unique<BrightenCommand>();
        commands["blur"] = make_unique<BlurCommand>();
        commands["sharpen"] = make_unique<SharpenCommand>();
        commands["greyscale"] = make_unique<GreyscaleCommand>();
        commands["sepia"] = make_unique<SepiaCommand>();
        commands["silvertone"] = make_unique<SilvertoneCommand>();
        commands["dramatic"] = make_unique<DramaticCommand>();
        commands["dramatic-warm"] = make_unique<DramaticWarmCommand>();
        commands["dramatic-cool"] = make_unique<DramaticCoolCommand>();
        commands["negative"] = make_unique<NegativeCommand>();
        commands["lomo"] = make_unique<LomoCommand>();
        commands["magenta"] = make_unique<MagentaCommand>();
        commands["night-vision"] = make_unique<NightVisionCommand>();
        commands["color-boost"] = make_unique<ColorBoostCommand>();
        commands["cool"] = make_unique<CoolCommand>();
        commands["warm"] = make_unique<WarmCommand>();
        commands["swap"] = make_unique<SwapCommand>();
        commands["posterize"] = make_unique<PosterizeCommand>();
        commands["saturation"] = make_unique<SaturationCommand>();
        commands["load"] = make_unique<LoadCommand>();
        commands["save"] = make_unique<SaveCommand>();
    }
    virtual ~IController() = default;

    virtual void run(istream& input) = 0;
};

#endif //IMAGEEDITING_ICONTROLLER_H
