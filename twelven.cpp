#include<iostream>
int sum();
using namespace std;
int main() {
    int n=0;
    cout << "큰 수를 입력하세요>>";
    cin >> n;

    int sum(int a, int b){
        int k, res =0;
        for(k=a; k<b; k++){
            res += k;
        }
        return res;
    }
    
    cout << "1에서 " << n << "까지의 합은" << sum(1,n) << "입니다." <<endl;

    
    

}