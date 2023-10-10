//even_and_odd_sum
/************************************************************************************
파일 명칭 : even_and_odd_sum
기    능 : 1부터 100까지의 수 중 홀수의 합과 짝수의 합을 구한다.
함수 명칭 : main
출    력 : 1부터 100까지의 수 중 홀수의 합, 1부터 100까지의 수 중 짝수의 합
입    력 : 없음
작 성 자 : 박성현
작성 일자 : 2023-10-10-(화)-150356
*************************************************************************************/
// 전처리 단락
#include <stdio.h>
#define MAX 100
// 함수 선언 및 정의 단락
int main(void){
    // 자동 변수 선언 단락
    int number;
    int odd_total = 0;
    int even_total = 0;
    for(number=1; number<=MAX; number++){ //1. MAX보다 작거나 같은 경우 반복한다.
        if(number%2==1){
            odd_total += number; //1.1 홀수이면 odd_total에 number를 더하고
        }
        else{
            even_total += number; //1.1 짝수이면 even_total에 number를 더한다.
        }
    }
    // 2. 출력한다.
    printf("1부터 100까지의 홀수의 합은 %d이고, 짝수의 합은 %d입니다.", odd_total, even_total);
}