// grouped_sum.c
/************************************************************************************
파일 명칭 : grouped_sum
기    능 : 1+(1+2)+(1+2+3)....+(1+2+3...+99+100)의 값을 구한다.
함수 명칭 : main
출    력 : 1+(1+2)+(1+2+3)....+(1+2+3...+99+100)
입    력 : 없음
작 성 자 : 박성현
작성 일자 : 2023-10-10-(화)-170253
*************************************************************************************/
// 전처기리 단락
#include <stdio.h>
#define MAX 100

// 함수 선언
int main(int argc, char *argv[]);

// 함수 정의 
int main(int argc, char *argv[]){
    int total1 = 0;
    int total2 = 0;
    int number1;
    int number2;
    for(number1=1; number1<=MAX; number1++){
        total2 = 0;
        for(number2=1; number2<=number1; number2++){
            total2 += number2;
        }
        total1 += total2;
    }
    printf("주어진 값의 출력은 %d입니다.", total1);
}