// find_the_year_double.c
/************************************************************************************
파일 명칭 : find_the_year_double.c
기    능 : 연 7% 이율로 복리를 했을 대, 언제 2배가 되는 지 찾는다.
함수 명칭 : main
출    력 : 몇 년 후에 원금의 2배를 만들 수 있는지
입    력 : 없음
작 성 자 : 박성현
작성 일자 : 2023-10-12-(목)-125502
*************************************************************************************/
// 전처리기 단락
#include <stdio.h> 
#define RATE 1.07
#define PRINCIPAL 10000000

int main(int argc, char *argv[]); // 함수 선언 단락

int main(int argc, char *argv[]){ // 함수 정의 단락
    int count = 0;
    long current_money = PRINCIPAL;
    long target = PRINCIPAL * 2;
    while(current_money < target){
        current_money *= RATE;
        count += 1;
    } 
    printf("원금의 2배가 되는 데 걸리는 시간은 %d년입니다", count);
    return 0;
}