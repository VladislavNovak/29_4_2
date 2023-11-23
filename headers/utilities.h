#ifndef INC_29_4_2_UTILITIES_H
#define INC_29_4_2_UTILITIES_H

#include <cmath>

double getTriangleHeight(double hyp, double cat) {
    return std::sqrt(hyp * hyp -  std::pow(cat / 2, 2));
}

#endif //INC_29_4_2_UTILITIES_H
