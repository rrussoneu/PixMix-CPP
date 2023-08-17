//
// Created by Raphael Russo on 8/12/23.
//

#ifndef IMAGEEDITING_IVIEW_H
#define IMAGEEDITING_IVIEW_H
#pragma once

#include "string"

using namespace std;

class IView {
public:
    IView() {}
    virtual ~IView() {}

    /**
     * Writes a message.
     * @param msg The message to write.
     */
    virtual void writeMessage(string msg) const = 0;
};

#endif //IMAGEEDITING_IVIEW_H
