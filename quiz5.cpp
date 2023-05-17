#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ifstream fin("a.txt");
    if(!fin) { cout << "파일 열기 실패"; return 0;}
    string atxt;
    getline(fin,atxt,'&');
    cout << atxt << endl;
    fin.close();

    string f; int count =0;
    cout << "찾는 문구:";
    getline(cin,f);
    int sindex =0;
    while(true){
        int findex = atxt.find(f,sindex);
        if(findex == -1) break;
        count ++;
        sindex = findex + f.length();
    }

    cout << count << "개 찾았습니다." << endl;
}