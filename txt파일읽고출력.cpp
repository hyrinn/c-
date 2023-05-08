#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    string name, dept;
    int grade;
    ifstream fa("a.txt"); if(!fa) {cerr << "파일 열기 실패\n"; return 0;}
    fa >> name;
    fa >> grade;
    fa >> dept;

    cout << "이름: " << name << endl;
    cout << "학번: " << grade << endl;
    cout << "학과: " << dept << endl;

    fa.close();
}