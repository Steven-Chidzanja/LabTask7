#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle() {
    Length = 0;
    Width = 0;
}

Rectangle::Rectangle(float Length1, float Width1) {
    Length = Length1;
    Width = Width1;
}

void Rectangle::setLength(float length1) {
    Length = length1;
}

void Rectangle::setWidth(float Width1) {
    Width = Width1;
}

float Rectangle::getLength() const {
    return Length;
}

float Rectangle::getWidth() const {
    return Width;
}

float Rectangle::calcAreaOfRectangle() const {
    return Length * Width;
}

int main()
{
    // Create an instance using default constructor
    Rectangle trial;

    float Width;
    float Length;

    cout << "Enter the length: ";
    cin >> Length;
    trial.setLength(Length);

    cout << "Enter the Width: ";
    cin >> Width;
    trial.setWidth(Width);

    float Area = trial.calcAreaOfRectangle();
    cout << "The area of the first rectangle is " << Area << " square meters." << endl;

    // Create another instance using overloaded constructor
    cout << "Enter the length of another rectangle: ";
    cin >> Length;
    cout << "Enter the width of another rectangle: ";
    cin >> Width;

    Rectangle anotherTrial(Length, Width);
    float Area2 = anotherTrial.calcAreaOfRectangle();
    cout << "The area of the second rectangle is " << Area2 << " square meters." << endl;

    return 0;
}
