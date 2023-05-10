#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ifstream a("a.txt"); if(!a) { cerr << "파일 열기 실패\n";  return 0;}
    ofstream b("b.txt"); if(!b) { cerr << "파일 열기 실패\n";  return 0;}

    string atxt;
    getline(a,atxt,'&');
    a.close();

    string f,r;
    cout << "find: ";
    getline(cin,f);
    cout << "replace: ";
    getline(cin,r);

    int aindex =0;
    while(true){
        int bindex = atxt.find(f,aindex);
        if(bindex == -1) break;
        atxt.replace(bindex,f.length(),r);
        aindex = bindex + r.length();
    }
    b << atxt;
    b.close();
    return 0;
}