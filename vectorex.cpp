#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
    
    vector <string> v = {"망고스무디", "모카", "아메리카노", "콜라", "사이다"};

    for(auto n : v) cout << n << " ";
    cout << endl;

    v.pop_back();
    cout << v.size() << endl;

    v.push_back("사이다");
    cout << v.size() << endl;

    return 0;
}