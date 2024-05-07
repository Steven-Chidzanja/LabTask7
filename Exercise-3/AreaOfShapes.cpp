#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include <cmath>
#include <iostream>
using namespace std;

namespace shapes {
    Square::Square() : sideLength(0.0) {}

    Square::Square(double Length) : sideLength(Length) {}

    double Square::getSideLength() const {
        return sideLength;
    }

    Square::~Square() {
        cout << "Square object destroyed" <<endl;
    }
}

namespace shapes {
    Triangle::Triangle() : Base(0.0), Height(0.0) {}

    Triangle::Triangle(double B, double H) : Base(B), Height(H) {}

    double Triangle::getBase() const {
        return Base;
    }

    double Triangle::getHeight() const {
        return Height;
    }

    Triangle::~Triangle() {
        cout << "Triangle object destroyed" <<endl;
    }
}

namespace shapes {
    Circle::Circle() : radius(0.0) {}

    Circle::Circle(double R) : radius(R) {}

    double Circle::getRadius() const {
        return radius;
    }

    Circle::~Circle() {
        cout << "Circle object destroyed" <<endl;
    }
}
using namespace shapes;

//functions prototypes.
int areaOfSquare(int);
double areaOfTriangle(double, double);
double areaOfCircle(double);

int main() {
    char choice;
    do {
        cout << "Options:" <<endl;
        cout << "1. Calculate the area of a square" <<endl;
        cout << "2. Calculate the area of a triangle" <<endl;
        cout << "3. Calculate the area of a circle" <<endl;
        cout << "4. Quit" <<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case '1': {
                double sideLength;
                cout << "Enter the side length of the square: ";
                cin >> sideLength;
                Square square(sideLength);
                cout << "Area of square: " << areaOfSquare(sideLength) <<endl;
                break;
            }
            case '2': {
                double Base, Height;
                cout << "Enter the base of the triangle: " << endl;
                cin >> Base; 
                cout << "Enter the height of the triangle: " << endl;
                cin >> Height;
                Triangle triangle(Base, Height);
                cout << "Area of triangle: " << areaOfTriangle(Base, Height) <<endl;
                break;
            }
            case '3': {
                double radius;
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                Circle circle(radius);
                cout << "Area of circle: " << areaOfCircle(radius) <<endl;
                break;
            }
            case '4':
                exit(0);
                break;
            default:
                cout << "Invalid choice!" <<endl;
        }
    } while (choice != '4');

    return 0;
}
int areaOfSquare(int l)
{
    return l * l;
}
double areaOfTriangle(double Base, double Height)
{
    return 0.5 * Base * Height;
}
double areaOfCircle(double radius)
{
    return 3.14 * radius * radius;
}