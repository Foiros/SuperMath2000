//
// Created by arttu on 02/09/2021.
//

#ifndef SUPERMATH2000_TRIGONOMETRY_H
#define SUPERMATH2000_TRIGONOMETRY_H

#include <math.h>


class Trigonometry {

public:
    static double AreaOfTriangle(double stem, double height);
    static double PythagoraTheorem(double stem, double height, double hypotenusa);
    static double Sin(double kulmanAste, double a, double c);
    static double Cos(double kulmanAste, double b, double c);
    static double Tan(double kulmanAste, double a, double b);
};


#endif //SUPERMATH2000_TRIGONOMETRY_H
