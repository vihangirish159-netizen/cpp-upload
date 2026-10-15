#include <iostream>
#include <string>
using namespace std;

class Shape {
protected:
    string name;
public:
    Shape(string n) : name(n) { cout << "Shape constructor: " << name << endl; }
    ~Shape() { cout << "Shape destructor" << endl; }
};

class Polygon : public Shape {
protected:
    int sides;
public:
    Polygon(string n, int s) : Shape(n), sides(s) {
        cout << "Polygon constructor: " << sides << " sides" << endl;
    }
    ~Polygon() { cout << "Polygon destructor" << endl; }
};

class Rectangle : public Polygon {
    double area;
public:
    Rectangle(string n, int s, double a) : Polygon(n, s), area(a) {
        cout << "Rectangle constructor: area = " << area << endl;
    }
    ~Rectangle() { cout << "Rectangle destructor" << endl; }
};

int main() {
    Rectangle r("Rectangle", 4, 12.5);
    return 0;
}
