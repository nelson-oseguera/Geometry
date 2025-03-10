#ifndef GEOMETRY_H
#define GEOMETRY_H

#include <iostream>
#include <cstdlib>

class Geometry
{
public:
    // Constructors
    Geometry() : length(0), width(0), side(0) {} // Default constructor
    Geometry(int l, int w) : length(l), width(w), side(0) { checkNum(length); checkNum(width); } // Constructor for rectangle
    Geometry(int s) : length(0), width(0), side(s) { checkNum(side); } // Constructor for cube

    // Setter functions
    void setLength(int l) { length = l; checkNum(length); }
    void setWidth(int w) { width = w; checkNum(width); }
    void setSide(int s) { side = s; checkNum(side); }

    // Getter functions
    int getLength() const { return length; }
    int getWidth() const { return width; }
    int getSide() const { return side; }

    // Calculate area, perimeter, and surface area
    int getArea() const { return length * width; }
    int getPerimeter() const { return 2 * (length + width); }
    int getSurfaceArea() const { return 6 * side * side; }

private:
    // Private member variables to store dimensions
    int length;
    int width;
    int side;

    // Private function to validate dimensions
    void checkNum(int num) {
        if (num <= 0) {
            std::cerr << "Error: Value must be greater than zero." << std::endl;
            exit(1);
        }
    }
};

#endif
