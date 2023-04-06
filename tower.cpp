#include<iostream>
using namespace std;

class Tower{
    public:
        int height; //멤버변수
        Tower(); //매개변수 없는 생성자
        Tower(int r); //매개변수 있는 생성자
        int getHeight(); //멤버함수
        
}; // 클래스 선언부

Tower::Tower(){   //클래스 구현부
    height = 1;
}
Tower::Tower(int r){
    height = r;
}

int Tower::getHeight(){
    return height;
}

int main(){
    Tower myTower; //매개변수 없는 생성자 호출
    Tower seoulTower(100); //매개변수 있는 생성자 호출
    cout << "높이는" << myTower.getHeight() << "미터" << endl;
    cout << "높이는" << seoulTower.getHeight() << "미터" << endl;

}