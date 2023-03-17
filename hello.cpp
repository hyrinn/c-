#include<iostream>
#include<string>
using namespace std;
int main(){
    string password;
    string password2;
    string name;

    cout << "이름 입력: " ;
    getline(cin,name);
    while(true){
        cout << "암호 입력: ";
        getline(cin, password);
        cout << "다시 입력: ";
        getline(cin, password2);

        if(password == password2) {
            cout << name << "님께서 로그인하셨습니다."<< endl;
            break;
        }
        else
        cout << name << "님, 다시 입력하세요."<< endl;
        break;
    }
    return 0;
}