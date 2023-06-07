#include<iostream>
#include<string>
#include<map>
#include<fstream>
using namespace std;
int main(){
    map<string, string> m;
    
    ofstream fout("capacity.txt");
    if(!fout) { cerr << "파일 열기 실패\n"; return 0; }

    string cap, nr, ox;
    while(true){
        cout << "나라 수도:";
        cin >> nr;
        if(nr == "exit") break;
        else
            cin >> cap;
        m.insert(make_pair(nr, cap));
        if(nr == nr) 
            cout << "이미 등록된 나라입니다. 수정할까요? (y/n): ";
        cin >> ox;
        if(ox == "y"){
            m[nr] = cap;
        }
        for(auto it = m.begin(); it != m.end(); it++)
            fout << it->first << " " << it->second << endl;
    }

    
    cout << m.size() << "나라의 수도 정보를 capacity.txt에 저장하였습니다. 감사합니다." << endl;
    fout.close();

}