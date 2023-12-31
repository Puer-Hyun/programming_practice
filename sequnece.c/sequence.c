// sequence.c
/************************************************************************************
파일 명칭 : sequence.c
기    능 : 1부터 1000까지 부호를 바꿔가며 더한다.
함수 명칭 : main
출    력 : 1-2+3-4+.....+999-1000 (100인지?)
입    력 : 없음
작 성 자 : 박성현
작성 일자 : 2023-10-10-(화)-171155
*************************************************************************************/
#include <stdio.h>
#define MAX 1000 //전처리기 단락

int main(int argc, char *argv[]); //선언 
int main(int argc, char *argv[]){
    // 자동변수 선언 및 누적 변수 초기화
    int i=1;
    int total = 0;
    while(i<=MAX){ // 1. 1000보다 작거나 같은 동안 반복
        if(i%2==0){
            total -= i;
        }
        else{
            total += i;
        }
        i++;
    }
    printf("정답은 %d입니다.", total);

}
