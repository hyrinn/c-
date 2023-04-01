#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool evaluate(string s) {
    stack<bool> st;
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (c == ' ') {
            // 공백 문자는 무시합니다.
            continue;
        } else if (c == 'T') {
            // 'T' 문자는 참(true)을 나타냅니다.
            st.push(true);
        } else if (c == 'F') {
            // 'F' 문자는 거짓(false)을 나타냅니다.
            st.push(false);
        } else if (c == '&' || c == '|' || c == '!') {
            // 논리 연산자를 처리합니다.
            bool a, b;
            switch (c) {
                case '&':
                    b = st.top(); st.pop();
                    a = st.top(); st.pop();
                    st.push(a && b);
                    break;
                case '|':
                    b = st.top(); st.pop();
                    a = st.top(); st.pop();
                    st.push(a || b);
                    break;
                case '!':
                    a = st.top(); st.pop();
                    st.push(!a);
                    break;
            }
        } else {
            // 잘못된 입력이 들어온 경우 오류를 출력합니다.
            cout << "Invalid input: " << c << endl;
            return false;
        }
    }
    // 스택에 최종적으로 남은 값이 명제의 참 거짓을 결정합니다.
    return st.top();
}

int main() {
    // 연산자와 숫자로 이루어진 문자열을 입력받습니다.
    string s;
    cout << "Enter the proposition: ";
    getline(cin, s);

    // 입력된 문자열을 평가하여 명제의 참 거짓을 결정합니다.
    bool result = evaluate(s);

    // 명제의 참 거짓을 출력합니다.
    if (result) {
        cout << "The proposition is true." << endl;
    } else {
        cout << "The proposition is false." << endl;
    }

    return 0;
}
