#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char a[100] = "안녕하세요?";
    char b[100] = "날씨가 참 좋군요.";
    char c[100] = "안녕히 계세요!";

    cout << "함수 사용" << endl;
    cout << strlen(a) << ' ' << strlen(b) << ' ' << strlen(c) << ' ' << endl;

    cout << "반복문으로 계산" << endl;

    int i,j,k;

    for(i=0; a[i] != '\0'; i++);
    cout << i << ' ';
    for(j=0; b[j] != '\0'; j++);
    cout << j << ' ';
    for(k=0; c[k] != '\0'; k++);
    cout << k << ' ' << endl;
}