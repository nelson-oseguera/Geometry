#include <iostream>
#include "Geometry.h" // Includes the Geometry class header file

int main() {
    int len = 0, wid = 0, side = 0;

    // Testing setLength, setWidth, setSide
    len = 5;
    wid = 4;
    side = 3;

    // Creating a Geometry object and setting its dimensions
    Geometry rectangle;
    rectangle.setLength(len);
    rectangle.setWidth(wid);
    rectangle.setSide(side);

    // Testing constructor for rectangle
    Geometry rectangle2(len, wid);

    // Outputting properties of rectangle
    std::cout << "Length: " << rectangle.getLength() << std::endl;
    std::cout << "Width: " << rectangle.getWidth() << std::endl;
    std::cout << "Side: " << rectangle.getSide() << std::endl;
    std::cout << "Area: " << rectangle.getArea() << std::endl;
    std::cout << "Perimeter: " << rectangle.getPerimeter() << std::endl;
    std::cout << "Surface Area: " << rectangle.getSurfaceArea() << std::endl;

    // Testing constructor for cube
    Geometry cube(side);

    // Outputting properties of cube
    std::cout << "Cube Side: " << cube.getSide() << std::endl;
    std::cout << "Cube Surface Area: " << cube.getSurfaceArea() << std::endl;

    // Testing default constructor
    Geometry defaultGeom;

    // Outputting properties of default Geometry object
    std::cout << "Default Length: " << defaultGeom.getLength() << std::endl;
    std::cout << "Default Width: " << defaultGeom.getWidth() << std::endl;
    std::cout << "Default Side: " << defaultGeom.getSide() << std::endl;

    return 0;
}
