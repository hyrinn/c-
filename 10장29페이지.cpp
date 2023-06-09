#include<iostream>
#include<random>
#include<vector>
#include<fstream>
using namespace std;
int main(){
    vector <int> v;

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(1,10);

    int a,b;
    do{
        a=dist(gen);    b=dist(gen);
        v.push_back(a); v.push_back(b);
    }while(a != b);

    ofstream fout("random.txt");
    fout << v.size()/2 << "개의 정수 쌍이 생성되었습니다." << endl;
    for(int i=0;i<v.size();i+=2){
        fout << "(" << v[i] << "," << v[i+1] << ")" << endl;
    }
    fout.close();

}