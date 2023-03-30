#include<iostream>
using namespace std;

//클래스 선언부
class Circle { //클래스
public:
    int radius;
    Circle();
    Circle(int r);
    ~Circle();
    double getArea();
}; //클래스 괄호 끝에 세미콜론 까먹지 않기

Circle::Circle(){ //생성자
    radius = 1;
    cout << "반지름 " << radius << "원 생성" << endl;
}

//클래스 구현부
Circle::Circle(int r){ // 생성자
    radius = r;
    cout << "반지름 " << radius << "원 생성" << endl;
}

Circle::~Circle(){ // 소멸자
    cout << "반지름" << radius << "원 소멸" << endl;
}

double Circle::getArea() { // 멤버함수
    return 3.14*radius*radius;
}

Circle globalDonut(1000); //전역 객체
Circle globalPizze(2000); //전역 객체

void f() { //전역함수
    Circle fDonut(100);
    Circle fPizza(200);
}

int main() {
    Circle maindonut;
    Circle mainPizza;
    cout << "--------" << endl;
    f();
    cout << "--------" << endl;
}