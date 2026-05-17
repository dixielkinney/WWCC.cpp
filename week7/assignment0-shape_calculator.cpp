// Coding Assignment 0: Shape Calculator

#include <iostream>
#include <iomanip>
using namespace std;

// l = length
// w = width
// perminiter = 2l + 2w
// area = l * w
// r = radius
// d * pi = circumference
// r^2 * pi = area

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w);

    double getLength() const;
    double getWidth() const;

    void setLength(double l);
    void setWidth(double w);

    double area() const;
    void area(double& result) const;

    Rectangle& resize(double factor);
};

Rectangle::Rectangle(double l, double w) {
    setLength(l);
    setWidth(w);
}

double Rectangle::getLength() const {
    return length;
}

double Rectangle::getWidth() const{
    return width;
}

void Rectangle::setLength(double l) {
    if (l > 0)
        length = l;
}

void Rectangle::setWidth(double w) {
    if (w > 0)
        width = w;
}

double Rectangle::area() const {
    return length * width;
}

void Rectangle::area(double& result) const {
    result = length * width;
}

Rectangle& Rectangle::resize(double factor) {
    if (factor > 0) {
        this->length *= factor;
        this->width *= factor;
    }
}

class Circle {
private:
    double radius;

public:
    Circle(double r);

    void setRadius(double r);

    double area() const;
    double circumference()const;
    double getRadius() const;

    void print() const;
    void print(bool detailed) const;
};

Circle::Circle(double r) {
    setRadius(r);
}

void Circle::setRadius(double r) {
    if (r > 0)
        radius = r;
}

double Circle::area() const {
    return 3.14159 * radius * radius;
}

double Circle::circumference() const {
    return 3.14159 * (2 * radius);
}

void Circle::print() const {
    cout << "Radius: " << radius << endl;
}

void Circle::print(bool detailed) const {
    if (detailed) {
        cout << "Radius: " << radius << endl;
        cout << "Area: " << area() << endl;
        cout << "Circumference: " << circumference() << endl;
    } else {
        print();
    }
}

double Circle::getRadius() const {
    return radius;
}

int main() {
    cout << fixed << setprecision(2);

    cout << "SHAPE CALCULATOR" << endl;
    cout << "----------------" << endl << endl;

    // rectangle
    Rectangle rect(5,3);
    cout << "Rectangle (Length: " << rect.getLength() << ", Width: " << rect.getWidth() << ")" << endl;
    cout << "   Area: " << rect.area() << endl;
    double result;
    rect.area(result);
    cout << "   Area via reference: " << result << endl << endl;

    // circle
    Circle circle(4);
    cout << "Circle (Radius: " << circle.getRadius() << ")" << endl;
    cout << "   Area: " << circle.area() << endl;
    cout << "   Circumference: " << circle.circumference() << endl << endl;

    // circle details
    cout << "Circle Details: " << endl;
    cout << "   Radius: " << circle.getRadius() << endl;
    cout << "   Area: 3.14159 times " << circle.getRadius() << "^2 = " << circle.area() << endl;
    cout << "   Circumference: 2 times pi times " << circle.getRadius() << " = " << circle.circumference() << endl << endl;

    // method chaining
    cout << "Method Chaining:" << endl;
    Rectangle chainRect(5,3);
    cout << "   Original: Length = " << chainRect.getLength() << ", Width = " << chainRect.getWidth() << endl;

    chainRect.resize(2);
    cout << "   After Resize (2): Length = " << chainRect.getLength() << ", Width = " << chainRect.getWidth() << endl;

    return 0;
}