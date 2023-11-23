#include <iostream>
#include "headers/Classes.h"

using std::cout;
using std::endl;

void printParams(Shape* form) {
    cout << "Type:   " << form->getName() << endl;
    cout << "Square: " << form->getArea() << endl;
    cout << "Width:  " << form->getRectWidth() << endl;
    cout << "Height: " << form->getRectHeight() << endl;
}

int main() {
    Shape* shape1 = new Circle(3);
    Shape* shape2 = new Triangle(3, 4, 5);
    printParams(shape2);
    return 0;
}
