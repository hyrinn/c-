#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v = {10,20,30,40,50};
    vector<int>::iterator it;

    for(it = v.begin(); it != v.end(); it++ ){
        *it += 1;
        cout << *it << ' ';
    }
    cout << endl;
    v.insert(it,100);
    for(it = v.begin(); it!=v.end();it++) cout << *it << ' ';
    cout << endl;
}
