#include <iostream>
#include <map>
#include <string>
#include <fstream>
using namespace std;
int main() {
    map<string, string> capitals; // 나라와 수도를 저장할 맵 생성
    string input;
    while (true) {
        cout << "나라 수도: ";
        getline(cin, input); // 사용자로부터 입력 받기
        if (input == "exit") {  break;  }
        size_t pos = input.find(' '); // 공백 문자 위치 찾기
        if (pos != string::npos) { // 공백 문자가 존재하는 경우
            string country = input.substr(0, pos); // 공백 이전의 문자열 추출하여 나라로 저장
            string capital = input.substr(pos + 1); // 공백 이후의 문자열 추출하여 수도로 저장
            auto it = capitals.find(country); // 나라를 키로 맵에서 검색
            if (it != capitals.end()) { // 나라가 이미 등록된 경우
                cout << "이미 등록된 나라입니다. 수정할까요? (y/n) : ";
                string answer;
                while (true) {
                    getline(cin, answer); // 사용자로부터 입력 받기
                    if (answer == "y" || answer == "Y") {   it->second = capital;   break;   }
                    else if (answer == "n" || answer == "N") {   break;  }
                    else {cout << "y/n을 제외한 다른 문자를 입력하셨습니다. 수정할까요? (y/n) : ";}
                }
            }
        else {  capitals[country] = capital;    }
        }
    }
    ofstream outputFile("capital.txt"); // 파일 출력 스트림 생성
    for (const auto& [country, capital] : capitals) {
        outputFile << country << ' ' << capital << '\n'; // 맵의 각 요소를 파일에 출력
    }
    outputFile.close(); // 파일 닫기
    cout << capitals.size() << " 나라의 수도 정보를 capital.txt에 저장하였습니다. 감사합니다.\n";
    return 0;
}
/*
읽어봐
    while (true) {
        getline(cin, answer); // 사용자로부터 입력 받기
            if (answer == "y" || answer == "Y") {   it->second = capital;   break;   }
            else if (answer == "n" || answer == "N") {   break;  }
            else {cout << "y/n을 제외한 다른 문자를 입력하셨습니다. 수정할까요? (y/n) : ";}
    }
*/