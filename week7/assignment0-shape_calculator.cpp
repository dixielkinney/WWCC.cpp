// Coding Assignment 0: Shape Calculator

#include <iostream>
#include <iomanip>
using namespace std;

// l = length
// w = width
// perminiter = 2l + 2w
// area = l * w

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

};

int main() {
    cout << fixed << setprecision(2);

    cout << "SHAPE CALCULATOR" << endl;
    cout << "----------------" << endl << endl;

    Rectangle rect(5,3);

    cout << "Rectangle (Length: " << rect.getLength() << ", Width: " << rect.getWidth() << ")" << endl;

    cout << "Area: " << rect.area() << endl;

    double result;
    rect.area(result);

    cout << "Area via reference: " << result << endl << endl;
}