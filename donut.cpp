#include<iostream>
using namespace std;

class Circle {
    public:
        int radius;
        Circle() {radius = 1;}
        double getArea() {
            return 3.141592 * radius * radius;
        }
};

int main() {
    Circle donut;
    cout << "donut 면적은" << donut.getArea() << endl;

    Circle pizza;
    pizza.radius = 10;
    cout << "pizza 면적은" << pizza.getArea() << endl;
}