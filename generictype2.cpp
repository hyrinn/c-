#include<iostream>
using namespace std;
template<class T1, class T2> class Mystack{
    T2 data[5];
public:
int tos = -1;
void push(T1 element){
    if(tos == 4) { cout << "stack full이므로 더 넣지 못합니다." << endl;}
    else{ tos++; data[tos] = (T2)element; }
}
T2 pop(){
    if(tos== -1) { cout << "stack empty - 프로그램을 종료합니다." << endl; exit(0); }
    return data[tos--];
}
};
int main(){
    Mystack<char,int> sc;
    sc.push('A'); sc.push('B'); sc.push('C'); sc.push('D'); sc.push('E'); sc.push('F');
    cout << "현재 char 스택에" << sc.tos + 1 << "개 있음" << endl;
    cout << "맨 위에 있는" << sc.pop() << "꺼냄" << endl;
    cout << "현재 char 스택에" << sc.tos + 1 << "개 남아있음" << endl << endl;
}