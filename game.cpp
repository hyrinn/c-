#include<iostream>
#include<string>
using namespace std;

int main(){
    
    cout << "가위 바위 보 게임을 합니다. 가위, 바위, 보 중에서 입력하세요." << endl;
    cout << "로미오>>";
    string romi;
    cin >> romi;
    
    cout << "줄리엣>>";
    string jul;
    cin >> jul;

    if(romi == jul){
        cout << "무승부입니다." << endl;
    }
    if(romi == "가위" && jul == "바위"){
        cout << "줄리엣이 이겼습니다." << endl;
    }
    if(romi == "가위" && jul == "보"){
        cout << "로미오가 이겼습니다." <<endl;
    }
    if(romi == "바위" && jul == "가위"){
        cout << "로미오가 이겼습니다" << endl;
    }
    if(romi == "바위" && jul == "보"){
        cout << "줄리엣이 이겼습니다." <<endl;
    }
    if(romi == "보" && jul == "가위"){
        cout << "줄리엣이 이겼습니다."  << endl;
    }
    if(romi == "보" && jul == "바위"){
        cout << "로미엣이 이겼습니다." <<endl;
    }
   return 0;
}