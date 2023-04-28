#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){
    int temp, sum=0;
    ifstream fa;
    fa.open("a.txt");
    ofstream fb;
    fb.open("b.txt");


    if(!fa) { cerr << "파일 열기 실패\n";   return 0; }

    for(int i=0;i<5;i++){
        fa >> temp;
        sum += temp;
    }
    fb << "합계: " << sum << endl;
    fb << "평균: " << sum/5.0 << endl;

    fa.close(); //파일 닫기
    fb.close(); //파일 닫기
}
