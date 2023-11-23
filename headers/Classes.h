#ifndef INC_29_4_2_CLASSES_H
#define INC_29_4_2_CLASSES_H

#include <iostream>
#include "constance.h"
#include "utilities.h"

using std::string;

class Shape {
protected:
    string name;
public:
    explicit Shape(string inName) : name{std::move(inName)} {}
    virtual string getName() = 0;
    [[nodiscard]] virtual double getArea() const = 0;
    [[nodiscard]] virtual double getRectWidth() const = 0;
    [[nodiscard]] virtual double getRectHeight() const = 0;
};

class Circle: public Shape {
    double radius;
public:
    explicit Circle(double inRadius): Shape("Circle") {
        radius = inRadius;
    }

    string getName() override { return name; }
    [[nodiscard]] double getArea() const override { return PI * radius * radius; }
    [[nodiscard]] double getRectWidth() const override { return radius * 2; }
    [[nodiscard]] double getRectHeight() const override { return radius * 2; }
};

class Triangle: public Shape {
    double sides[3]{};
public:
    Triangle(double lengthA, double lengthB, double lengthC) : Shape("Triangle") {
        sides[0] = lengthA;
        sides[1] = lengthB;
        sides[2] = lengthC;
    }

    string getName() override { return name; }
    [[nodiscard]] double getArea() const override {
        double p = (sides[0] + sides[1] + sides[2]) / 2;
        return sqrt(p * (p - sides[0]) * (p - sides[1]) * (p - sides[2]));
    }
    [[nodiscard]] double getRectWidth() const override { return sides[2]; }
    [[nodiscard]] double getRectHeight() const override { return (this->getArea() * 2) / sides[2]; }
};

class Rect: public Shape {
    double width;
    double height;
public:
    Rect(double inWidth, double inHeight) : Shape("Rect") {
        width = inWidth;
        height = inHeight;
    }

    string getName() override { return name; }
    [[nodiscard]] double getArea() const override { return width * height; }
    [[nodiscard]] double getRectWidth() const override { return width; }
    [[nodiscard]] double getRectHeight() const override { return height; }
    [[nodiscard]] bool hasSquare() const { return width == height; }
};

#endif //INC_29_4_2_CLASSES_H
