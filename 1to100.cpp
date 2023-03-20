#include<iostream>
using namespace std;
int main(){
    int a,b,i;
    a = 0;
    b = 0;
    for(i=1;i<=100;i++){
        a+=i;
        if(i%3==0){
          b+=i;
        }
    }
    cout << "1~100 사이의 정수합은 " << a << "이고" << "3의 배수의 합은" << b << "입니다." << endl;
}