// No_3_or_5_Multiples_Sum_1_to_100
/************************************************************************************
파일 명칭 : No_3_or_5_Multiples_Sum_1_to_100
기    능 : 1부터 100까지의 수 중 3의 배수 또는 5의 배수가 아닌 수를 더하는 문제
함수 명칭 : main
출    력 : 1부터 100까지의 수 중 3의 배수 또는 5의 배수가 아닌 수의 총합
입    력 : 없음
작 성 자 : 박성현
작성 일자 : 2023-10-10-(화)-180902
*************************************************************************************/
#include <stdio.h>
#define MAX 100

int main(int argc, char *argv[]);

int main(int argc, char *argv[]){
    int total = 0;
    int number;
    for(number=1; number<=MAX; number++){
        if((number%3!=0) & (number%5!=0)){
            total += number;
        }
    }
    printf("정답은 %d 입니다.", total);
}