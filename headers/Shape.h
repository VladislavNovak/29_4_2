#ifndef INC_29_4_2_SHAPE_H
#define INC_29_4_2_SHAPE_H

#include <iostream>

using std::string;

class Shape {
protected:
    string name;
public:
    explicit Shape(string inName);
    ~Shape() = default;
    virtual string getName() = 0;
    [[nodiscard]] virtual double getArea() const = 0;
    [[nodiscard]] virtual double getRectWidth() const = 0;
    [[nodiscard]] virtual double getRectHeight() const = 0;
};

#endif //INC_29_4_2_SHAPE_H
