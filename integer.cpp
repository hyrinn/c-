#include<iostream>
#include<string>
#include<cstring>
using namespace std;

class Integer{
public:
    int n;
    string t;
    string s;

    Integer(int a){
        n = a;
    };
    Integer(string s){
        get() = { return s;};
    }
    int get(){
        return n;
    }
    int set(int b){
        n = b;
    }
    int isEven(){
        while(true){
            break;
        }
    
    }
};
int main(){
    Integer n(30);
    cout << n.get() << ' ';
    n.set(50);
    cout << n.get() << ' ';

    Integer m("300");
    cout << m.get() << ' ';
    cout << m.isEven() << endl;
}