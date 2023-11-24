#ifndef INC_29_4_2_CIRCLE_H
#define INC_29_4_2_CIRCLE_H

#include <iostream>
#include "Shape.h"

using std::string;

class Circle: public Shape {
    double radius;
public:
    explicit Circle(double inRadius);

    string getName() override;
    [[nodiscard]] double getArea() const override;
    [[nodiscard]] double getRectWidth() const override;
    [[nodiscard]] double getRectHeight() const override;
};

#endif //INC_29_4_2_CIRCLE_H
