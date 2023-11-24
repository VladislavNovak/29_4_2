#ifndef INC_29_4_2_UTILITIES_H
#define INC_29_4_2_UTILITIES_H

#include <cmath>

// Получить высоту равнобедренного треугольника
double getEquilateralTriangleHeight(double hyp, double cat) {
    return std::sqrt(hyp * hyp -  std::pow(cat / 2, 2));
}

// Получить площадь, которую занимает треугольник
double getTriangleArea(double sideA, double sideB, double sideC) {
    double p = (sideA + sideB + sideC) / 2;
    return sqrt(p * (p - sideA) * (p - sideB) * (p - sideC));
}

#endif //INC_29_4_2_UTILITIES_H
