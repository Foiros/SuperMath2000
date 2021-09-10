#include <iostream>
#include "Trigonometry.h"

int main() {

    double stem = 9;
    double height = 10;
    double hypotenusa = 0;

    double area = Trigonometry::AreaOfTriangle(stem, height);

    std::cout << "Area of the triangle: " << area << std::endl;

    stem = 0;
    hypotenusa = 13;

    stem = Trigonometry::PythagoraTheorem(stem, height, hypotenusa);

    std::cout << "stem: " << stem << std::endl;

    stem = 9;
    height = 0;

    height = Trigonometry::PythagoraTheorem(stem, height, hypotenusa);

    std::cout << "Height: " << height << std::endl;

    height = 10;
    hypotenusa = 0;

    hypotenusa = Trigonometry::PythagoraTheorem(stem, height, hypotenusa);

    std::cout << "Hypotenusa: " << hypotenusa << std::endl;

    // Sin
    double a = 4.5;
    double c = 9;
    double kulmanAste = 0;

    kulmanAste = Trigonometry::Sin(kulmanAste, a, c);
    std::cout << "Kulmanaste: " << kulmanAste << std::endl;

    a = Trigonometry::Sin(kulmanAste, 0, c);
    std::cout << "A kateetin pituus: " << a << std::endl;

    c = Trigonometry::Sin(kulmanAste, a, 0);
    std::cout << "C kateetin pituus: " << c << std::endl;

    // Cos
    double b = 7.79;
    c = 9;
    kulmanAste = 0;

    kulmanAste = Trigonometry::Cos(kulmanAste, b, c);
    std::cout << "Kulmanaste: " << kulmanAste << std::endl;

    b = Trigonometry::Cos(kulmanAste, 0, c);
    std::cout << "B kateetin pituus: " << b << std::endl;

    c = Trigonometry::Cos(kulmanAste, b, 0);
    std::cout << "C kateetin pituus: " << c << std::endl;

    // Tan
    a = 5.2;
    b = 9;
    kulmanAste = 0;

    kulmanAste = Trigonometry::Tan(kulmanAste, a, b);
    std::cout << "Kulmanaste: " << kulmanAste << std::endl;

    a = Trigonometry::Tan(kulmanAste, 0, b);
    std::cout << "A kateetin pituus: " << a << std::endl;

    b = Trigonometry::Tan(kulmanAste, a, 0);
    std::cout << "B kateetin pituus: " << b << std::endl;


    return 0;
}
