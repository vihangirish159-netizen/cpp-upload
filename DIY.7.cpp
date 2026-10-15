#include <iostream>
using namespace std;

class Rectangle {
    double length, width;
public:
    Rectangle() : length(0), width(0) {}

    bool setLength(double l) {
        if (l < 0) { cout << "Error: length cannot be negative" << endl; return false; }
        length = l; return true;
    }
    bool setWidth(double w) {
        if (w < 0) { cout << "Error: width cannot be negative" << endl; return false; }
        width = w; return true;
    }
    double area() const      { return length * width; }
    double perimeter() const { return 2 * (length + width); }
};

int main() {
    Rectangle r;
    r.setLength(5);
    r.setWidth(3);
    cout << "Area: " << r.area() << endl;            // 15
    cout << "Perimeter: " << r.perimeter() << endl;  // 16
    r.setWidth(-2);                                  // rejected
    cout << "Area still: " << r.area() << endl;      // 15
    return 0;
}
