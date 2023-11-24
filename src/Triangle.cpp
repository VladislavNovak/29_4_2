#include "../headers/Triangle.h"
#include "../headers/utilities.h"

Triangle::Triangle(double lengthA, double lengthB, double lengthC) : Shape("Triangle") {
    sides[0] = lengthA;
    sides[1] = lengthB;
    sides[2] = lengthC;
}

string Triangle::getName() { return name; }

[[nodiscard]] double Triangle::getArea() const { return getTriangleArea(sides[0], sides[1], sides[2]); }

[[nodiscard]] double Triangle::getRectWidth() const { return sides[2]; }

[[nodiscard]] double Triangle::getRectHeight() const { return (this->getArea() * 2) / sides[2]; }
