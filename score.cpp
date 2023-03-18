#include<iostream>
#include<string>
using namespace std;
int main(){

    string question[] = {"개", "고양이", "기린", "코끼리", "표범"};
    string answer[] = {"dog", "cat", "giraffe", "elephant", "leopard"};
    string ox= "XXXXX";
    string input;
    int score(0);

    cout << "영단어로 바꾸세요." << endl;
    for(int i = 0; i<5; i++){
            cout << question[i] << ":";
            getline(cin, input);
        if(input == answer[i]){
                score += 20;
                ox[i] = 'O';
        }
        else
                score += 0;
                
    }
    cout << "==>" << ox << " " << score << "점입니다." << endl;
}