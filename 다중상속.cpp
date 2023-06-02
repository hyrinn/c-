#include<iostream>
using namespace std;
class Adder{
protected:
    int add(int a, int b) { return a+b;}
};
class Subtractor{
protected:
    int minus(int a, int b) { return a-b; }
};
class Calculator : public Adder, public Subtractor{
public:
    int calc(int a, char op, int b){
        int res = 0;
        if(op == '+') res = add(a,b);
        else if(op == '-') res = minus(a,b);
        return res;
    }
};
int main(){
    int a,b;    char op;    Calculator calcurator;
    while(true){
        cout << "수식을 입력하세요.(정수+정수 혹은 정주-정수)" << endl;
        cin >> a >> op >> b;
        if(a == 99 && b == 99) break;
        cout << "답은" << calcurator.calc(a,op,b) << "입니다." << endl;
    }
    cout << "계산을 종료합니다." <<endl;
}