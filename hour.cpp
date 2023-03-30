#include<iostream>
#include<cstring>
using namespace std;
class ConvertSecond {
 private:
        int i;
        int j;
        int k;     //int형 멤버변수 3개 선언

 public:
    
    int time;
    ConvertSecond();
    int getResult();
    void setData(); // 함수니까 () 꼭 써주기
    
};

ConvertSecond::ConvertSecond() { i=0; j=0; k=0; } // 생성자에서 멤버변수 3개 모두 0으로 초기화

void ConvertSecond::setData() {    
            cout << "시(hour) 입력: " ;
            cin >> i;
            cout << "분(minute) 입력: ";
            cin >> j;
            cout << "초(second) 입력: ";
            cin >> k;
}

int ConvertSecond::getResult(){          
            time = (i *60 * 60) + (j * 60) + k;
            return time;
}
    
    
int main() {

    ConvertSecond a;
    a.setData();
    cout << "입력하신 시간은 총" << a.getResult() << "초 입니다." << endl;

    ConvertSecond b;
    cout << "기본 시간은 총" << b.getResult() << "초 입니다." << endl;

}