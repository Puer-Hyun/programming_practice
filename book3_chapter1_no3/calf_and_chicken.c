// calf_and_chicken.c
/************************************************************************************
파일 명칭 : calf_and_chicken.c
기    능 : 송아지와 닭 마리수를 찾는다.
함수 명칭 : main
출    력 : 송아지, 닭 마리
입    력 : 없음
작 성 자 : 박성현
작성 일자 : 2023-10-12-(목)-133649
*************************************************************************************/
#include <stdio.h>
#define HEAD 46
#define TOTAL_LEG 140

int main(int argc, char *argv[]);

int main(int argc, char *argv[]){
    int number_of_cow;
    int number_of_chicken;

    for(number_of_cow=0; number_of_cow<=HEAD; number_of_cow++){
        number_of_chicken = HEAD-number_of_cow;
        int total_leg = (number_of_chicken*2) + (number_of_cow*4);
        if(total_leg==TOTAL_LEG){
            printf("소는 %d마리이고 닭은 %d마리입니다.\n", number_of_cow, number_of_chicken);
            break;
        }
    }
    return 0;


}