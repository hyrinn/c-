#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ofstream fa("movie.txt");  if(!fa) { cerr << "파일 열기 실패\n"; return 0; }
    int age = 50;
    string actor = "키아누 리브스", movie = "John Wick";
    fa << age << endl;
    fa << actor << endl;
    fa << movie << endl;

    fa.close();


}