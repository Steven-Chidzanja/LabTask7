#ifndef Rectangle_h
#define Rectangle_h

#include <iostream>

class Rectangle {
private:
    float Length;
    float Width;

public:
    Rectangle(); // Default constructor
    Rectangle(float Length1, float Width1); // Overloaded constructor

    void setLength(float Length1); // Setter for length
    void setWidth(float Width1); // Setter for width

    float getLength() const; // Getter for length
    float getWidth() const; // Getter for width

    float calcAreaOfRectangle() const; // Function to calculate area
};

#endif
