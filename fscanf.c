#pragma warning(disable:4996)
#include<stdio.h>
int main(){
    int temp,sum =0;
    FILE *fa = fopen("a.txt", "r");
    FILE *fb = fopen("b.txt", "w");

    if(!fa||!fb) { fprintf(stderr,"파일 열기 실패\n"); return 1;}

    for(int i=0; i<5;i++){
        fscanf(fa,"%d", &temp);
        sum += temp;
    }
    fprintf(fb,"합계: %d\n", sum);
    fprintf(fb,"평균: %.1f\n",(double)sum/5);

    fclose(fa); fclose(fb);

    printf("처리 완료. b.txt를 열어서 결과를 확인하세요.\n");
    return 0;

}