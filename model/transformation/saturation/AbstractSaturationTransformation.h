//
// Created by Raphael Russo on 8/12/23.
//

#ifndef IMAGEEDITING_ABSTRACTSATURATIONTRANSFORMATION_H
#define IMAGEEDITING_ABSTRACTSATURATIONTRANSFORMATION_H
#pragma once
#include "../ITransformation.h"
#include <cmath>


class AbstractSaturationTransformation : public ITransformation {
protected:
    double saturationValue;
    std::vector<double> convertToHSV(int red, int green, int blue) {
        std::vector<double> hsv(3);
        double r = red / 255.0;
        double g = green / 255.0;
        double b = blue / 255.0;

        double cmax = max(r, max(g,b));
        double cmin = min(r, min(g,b));
        double diff = cmax - cmin;
        double h = -1.0;
        double s = -1.0;
        if (cmax == cmin) {
            h = 0;
        }
        else if (cmax == r) {
            h = fmod(60 * ((g-b) / diff) + 360, 360);
        }
        else if (cmax == g) {
            h = fmod(60 * ((b - r) / diff) + 120, 360);
        }
        else if (cmax == b) {
            h = fmod(60 * ((r - g) / diff) + 240, 360);
        }

        if (cmax == 0) {
            s = 0;
        }
        else {
            s = (diff / cmax) * 100;
        }
        double v = cmax * 100;
        hsv[0] = h;
        hsv[1] = s;
        hsv[2] = v;
        return hsv;
    }

    double clampSaturation(double s) {
        if (s < 0.0) return 0.0;
        if (s > 100.0) return 100.0;
        return s;
    }
    std::vector<int> convertToRGB(double h, double s, double v) {
        std::vector<int> rgb(3);
        s /= 100;
        v /= 100;
        double c = v * s;
        double x = c * (1 - std::fabs(fmod(h/60.0, 2) - 1));
        double m = v - c;
        double r, g, b;
        if (h < 60) {
            r = c;
            g = x;
            b = 0;
        }
        else if (h < 120) {
            r = x;
            g = c;
            b = 0;
        }
        else if (h < 180) {
            r = 0;
            g = c;
            b = x;
        }
        else if (h < 240) {
            r = 0;
            g = x;
            b = c;
        }
        else if (h < 300) {
            r = x;
            g = 0;
            b = c;
        }
        else {
            r = c;
            g = 0;
            b = x;
        }
        rgb[0] = static_cast<int>((r + m) * 255);
        rgb[1] = static_cast<int>((g + m) * 255);
        rgb[2] = static_cast<int>((b + m) * 255);
        return rgb;
    }

public:
    AbstractSaturationTransformation(int saturationPercent) : saturationValue(saturationPercent/100.0), ITransformation() {}
    virtual ~AbstractSaturationTransformation() = default;
    virtual unique_ptr<IImage> apply(IImage& sourceImage) override = 0;
};
#endif //IMAGEEDITING_ABSTRACTSATURATIONTRANSFORMATION_H
