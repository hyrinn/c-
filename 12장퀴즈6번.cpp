#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ifstream fin("score.txt"); if(!fin) { cerr << "파일 열기 실패\n";  return 0;}
    ofstream fout("result.txt"); if(!fout) { cerr << "파일 열기 실패\n";  return 0;}
    string name[31];
    double score[31];
    double sum =0, max = score[0];
    int index;
    
    for(int i=0;i<31;i++){ 
        fin >> name[i] >> score[i];
        sum += score[i];
        if(max < score[i]){
            max = score[i];
            index = i;
        }
    }
    
    fout << fixed;
    fout.precision(2);
    fout << "합계: " << sum << endl;
    fout <<  "평균: " << (double)sum/31 << endl;
    fout << "최고점: " << name[index] <<' '<< max << endl;
    
    fin.close();
    fout.close();
    return 0;
}