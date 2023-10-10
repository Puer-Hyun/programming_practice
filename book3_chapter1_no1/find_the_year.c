// find_the_year.c
/************************************************************************************
파일 명칭 : find_the_year.c
기    능 : K시의 인구가 H시의 인구보다 많아지게 되는 년도를 찾는다.
함수 명칭 : main
출    력 : K시의 인구가 H시의 인구보다 많아지게 되는 년도
입    력 : 없음.
작 성 자 : 박성현
작성 일자 : 2023-10-11-(수)-030520
*************************************************************************************/
#include <stdio.h>
#define START_YEAR 1996
#define H_RATE 1.036
#define K_RATE 1.042

int main(){
    double H_population = 250.0;
    double K_population = 180.0;
    int count = 0;
    int result = 0;
    while (H_population > K_population){
        H_population = H_population * H_RATE;
        K_population = K_population * K_RATE;
        count ++;
    }
    result = START_YEAR + count;
    printf("K시의 인구가 더 많아지는 시점은 %d년입니다.", result);
}