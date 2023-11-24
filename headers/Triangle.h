#ifndef INC_29_4_2_TRIANGLE_H
#define INC_29_4_2_TRIANGLE_H

#include <iostream>
#include "Shape.h"

using std::string;

class Triangle: public Shape {
    double sides[3]{};
public:
    Triangle(double lengthA, double lengthB, double lengthC);

    string getName() override;
    [[nodiscard]] double getArea() const override;

    [[nodiscard]] double getRectWidth() const override;
    [[nodiscard]] double getRectHeight() const override;
};

#endif //INC_29_4_2_TRIANGLE_H
