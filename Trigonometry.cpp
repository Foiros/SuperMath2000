//
// Created by arttu on 02/09/2021.
//

#include "Trigonometry.h"

#define PI 3.14159265

double Trigonometry::AreaOfTriangle(double stem, double height) {

    double triangleArea = 0.5 * stem * height;
    return triangleArea;
}

double Trigonometry::PythagoraTheorem(double stem, double height, double hypotenusa) {

    double solution = 0;

    if(stem == 0){

        solution = sqrt(pow(hypotenusa, 2.0) - pow(height , 2.0));
    }
    else if(height == 0){

        solution = sqrt(pow(hypotenusa, 2.0) - pow(stem, 2.0));
    }
    else if(hypotenusa == 0){

        solution = sqrt(pow(stem, 2.0) + pow(height, 2.0));
    }

    return solution;
}

double Trigonometry::Sin(double kulmanAste, double a, double c) {

    if(kulmanAste == 0 ){

        return kulmanAste = asin(a/c) * 180.0 / PI;
    }
    else{

        if(a == 0){

            return a = sin(kulmanAste * PI / 180) * c;
        }
        else{

            return c = a / sin(kulmanAste * PI / 180);
        }
    }
}

double Trigonometry::Cos(double kulmanAste, double b, double c) {

    if(kulmanAste == 0){

        return kulmanAste = acos(b / c) * 180.0 / PI;
    }
    else{

        if(b == 0){

            return b = cos(kulmanAste * PI / 180) * c;
        }
        else{

            return c = b / cos(kulmanAste * PI / 180);
        }
    }
}

double Trigonometry::Tan(double kulmanAste, double a, double b) {

    if(kulmanAste == 0 ){

        return kulmanAste = atan(a / b) * 180.0 / PI;
    }
    else{

        if(a == 0){

            return a = tan(kulmanAste * PI / 180) * b;
        }
        else{

            return b = a / tan(kulmanAste * PI / 180);
        }
    }
}


