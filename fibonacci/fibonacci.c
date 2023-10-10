// fibonacci.c
/************************************************************************************
파일 명칭 : fibonacci.c
기    능 : 피보나치 수를 구한다.
함수 명칭 : main
출    력 : 50번째 피보나치 수를 구한다.
입    력 : 없음
작 성 자 : 박성현
작성 일자 : 2023-10-10-(화)-204239
*************************************************************************************/
#include <stdio.h>
#define MAX 50

int main(void){
    long long start=1;
    long long next=1;
    long long total=2;
    int count=4;
    while(count<=MAX){
        start = next;
        next = total;
        total = start + next;
        count ++ ; 
    }
    printf("정답은 %lld입니다.\n", total);
    return 0;
}