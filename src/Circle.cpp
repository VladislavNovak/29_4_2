#include "../headers/constance.h"
#include "../headers/Circle.h"

Circle::Circle(double inRadius) : Shape("Circle") { radius = inRadius; }

string Circle::getName() { return name; }

[[nodiscard]] double Circle::getArea() const { return PI * radius * radius; }

[[nodiscard]] double Circle::getRectWidth() const { return radius * 2; }

[[nodiscard]] double Circle::getRectHeight() const { return radius * 2; }