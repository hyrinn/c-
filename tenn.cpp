#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout << "문자열 입력>>";
    getline(cin, s);

    for(int i=0; i < s.length(); i++){
        for(int j=0; j <= i; j++){
            cout << s[j];
        }
        cout <<'\n';
    }
}