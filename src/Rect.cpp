#include "../headers/Rect.h"

Rect::Rect(double inWidth, double inHeight) : Shape("Rect") {
    width = inWidth;
    height = inHeight;
}

string Rect::getName() { return name; }

[[nodiscard]] double Rect::getArea() const { return width * height; }

[[nodiscard]] double Rect::getRectWidth() const { return width; }

[[nodiscard]] double Rect::getRectHeight() const { return height; }
