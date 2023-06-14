#include<iostream>
using namespace std;
class A{public: int x=1;};
class B : public A {public: int y = 2;};
class C : private A {public: int z=3;};
class D : protected B{ public: int w=4;};

int main(){
    A a; B b; 
    C c; D d;

    cout << a.x;
    cout << b.x;
    cout << b.y;
    cout << c.x;
    cout << c.z;
    cout << d.x;
    cout << d.y;
    cout << d.w;
}