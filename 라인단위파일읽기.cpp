#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ifstream fin("a.txt"); if(!fin) { cout << "열기 실패"; return 0; }
    ofstream fout("b.txt"); if(!fout) { cout << "열기 실패"; return 0; }

    string s;
    int n=0;
    while(getline(fin,s)){
        cout << n++ << "==>" << s << endl;
        fout << s << endl;
    }
    cout << "---------" << endl;
    cout << "총" << n << "라인" << endl;

    fin.close();
    fout.close();
}