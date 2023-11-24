#include <iostream>
#include <vector>
#include "Shape.h"
#include "Circle.h"
#include "Triangle.h"
#include "Rect.h"

using std::cout;
using std::endl;
using std::vector;

void printParams(Shape* form) {
    cout << "Type:   " << form->getName() << endl;
    cout << " - Square: " << form->getArea() << endl;
    cout << " - Width:  " << form->getRectWidth() << endl;
    cout << " - Height: " << form->getRectHeight() << endl;
}

void deleteShapes(vector<Shape*> shapes) {
    for (auto &shape : shapes) { delete shape; }
    shapes.clear();
}

int main() {
    vector<Shape*> shapes;
    shapes.emplace_back(new Circle(3));
    shapes.emplace_back(new Triangle(3, 4, 5));
    shapes.emplace_back(new Rect(4, 5));

    for (auto & shape : shapes) { printParams(shape); }

    deleteShapes(shapes);
    return 0;
}
