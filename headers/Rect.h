#ifndef INC_29_4_2_RECT_H
#define INC_29_4_2_RECT_H

#include <iostream>
#include "Shape.h"

using std::string;

class Rect: public Shape {
    double width;
    double height;
public:
    Rect(double inWidth, double inHeight);

    string getName() override;
    [[nodiscard]] double getArea() const override;
    [[nodiscard]] double getRectWidth() const override;
    [[nodiscard]] double getRectHeight() const override;
};

#endif //INC_29_4_2_RECT_H
