
#include <iostream>
using namespace std;

// Define the Rectangle class
class Rectangle {
private:
    // Private data members (cannot be accessed directly outside the class)
    double width;
    double length;

public:
    // Function to set the width of the rectangle
    void setWidth(double w) {
        width = w;
    }

    // Function to set the length of the rectangle
    void setLength(double l) {
        length = l;
    }

    // Function to retrieve the width
    double getWidth() {
        return width;
    }

    // Function to retrieve the length
    double getLength() {
        return length;
    }

    // Function to calculate and return the area
    double calculateArea() {
        return width * length;
    }

    // Function to calculate and return the perimeter
    double calculatePerimeter() {
        return 2 * (width + length);
    }
};

int main() {
    // Create the first Rectangle object
    Rectangle rect1;

    // Set the dimensions of the first rectangle
    rect1.setWidth(4);
    rect1.setLength(8);

    // Display the dimensions and calculations
    cout << "Rectangle 1" << endl;
    cout << "Width: " << rect1.getWidth() << endl;
    cout << "Length: " << rect1.getLength() << endl;
    cout << "Area: " << rect1.calculateArea() << endl;
    cout << "Perimeter: " << rect1.calculatePerimeter() << endl;

    cout << endl;

    // Create a second Rectangle object
    Rectangle rect2;

    // Set different dimensions for the second rectangle
    rect2.setWidth(7);
    rect2.setLength(12);

    // Display the second rectangle's details
    cout << "Rectangle 2" << endl;
    cout << "Width: " << rect2.getWidth() << endl;
    cout << "Length: " << rect2.getLength() << endl;
    cout << "Area: " << rect2.calculateArea() << endl;
    cout << "Perimeter: " << rect2.calculatePerimeter() << endl;

    return 0; // End the program successfully
}
