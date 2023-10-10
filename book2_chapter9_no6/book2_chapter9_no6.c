// book2_chapter9_no6.c
/************************************************************************************
파일 명칭 : book2_chapter9_no6.c
기    능 : 1-(2/3!)+(3+5!)+.....-(10/(19!)) 의 값을 구한다.
함수 명칭 : main
출    력 : 1-(2/3!)+(3+5!)+.....-(10/(19!))
입    력 : 없음
작 성 자 : 박성현 
작성 일자 : 2023-10-10-(화)-183203
*************************************************************************************/
#include <stdio.h>
#define MAX 10

int main(int argc, char *argv[]);

int main(int argc, char *argv[]){
    int number=1;
    int i;
    long long factorial;
    double total = 0.0;
    while(number<=MAX){
        factorial = 1 ;
        for(i=1;i<=(2*number)-1;i++){
            factorial *= i;
        }
        if(number%2==1){
            total += (double)number/factorial;
        }
        else{
            total -= (double)number/factorial;
        }
        number ++ ; 
    }
    printf("The answer is %.15f\n", total);
}