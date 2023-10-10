// summation _of_fraction
/************************************************************************************
파일 명칭 : summation _of_fraction
기    능 : 1-(1/2)+(1/3)+.....-(1/100)
함수 명칭 : main
출    력 : summation _of_fraction
입    력 : 없음
작 성 자 : 박성현
작성 일자 : 2023-10-10-(화)-181937
*************************************************************************************/
#include <stdio.h>
#define MAX 100

int main(int argc, char *argv[]);

int main(int argc, char *argv[]){
    int i;
    float total = 0.0;
    for(i=1;i<=MAX;i++){
        if(i%2==1){
            total += 1.0/(float)i;
        }
        else{
            total -= 1.0/(float)i;
        }
    }
    printf("the answer is %f", total);
}