#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5,7);
    cout << "size: " << v.size() <<" "<< "capacity: " << v.capacity() << endl;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "size: " << v.size() <<" "<< "capacity: " << v.capacity() << endl;

    for(int i=0;i<v.size();i++) cout << v[i] << " ";
    cout << endl;

    v[0] = -100;
    v.at(2) = 0;
    v.at(5) = 100;

    for(int i=0;i<v.size(); i++) cout << v[i] << " ";
    cout << endl;
}