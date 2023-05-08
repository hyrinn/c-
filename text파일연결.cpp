#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream a1("a1.txt");
    if(!a1) { cout << "읽기용 파일 열기 오류"; return 0;}
    ifstream a2("a2.txt");
    if(!a2) { cout << "읽기용 파일 열기 오류"; return 0;}
    ifstream a3("a3.txt");
    if(!a3) { cout << "읽기용 파일 열기 오류"; return 0;}

    ofstream b("b.txt", ios::app);
    if(!b) { cout << "추가쓰기용 파일 열기 오류"; return 0;}

    int c;
    while ((c = a1.get()) != EOF){
        b << (char)c;
    }
    while ((c = a2.get()) != EOF){
        b << (char)c;
    }
    while(( c = a3.get()) != EOF){
        b << (char)c;
    }

    cout << "파일 추가쓰기 완료" << endl;
    a1.close();
    a2.close();
    a3.close();
    b.close();
}