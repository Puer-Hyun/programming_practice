// isPrime.c
/************************************************************************************
파일 명칭 : isPrime.c
기    능 : 10개의 수를 입력받아 각각 소수인지 합성수인지 판단하는 코드
함수 명칭 : main
출    력 : 10개의 입력에 대한 소수/합성수 판단
입    력 : 10개의 수
작 성 자 : 박성현
작성 일자 : 2023-10-12-(목)-174418
*************************************************************************************/
#include <stdio.h>
#define MAX 5

int main(int argv, char *argc[]){
    long input;
    for(int i=1; i<=MAX; i++){
        printf("수를 입력하세요.\n");
        scanf("%ld", &input);
        if(input==1){
            printf("이 수는 소수입니다.");
        }
        else{
            int is_prime = 1 ;
            for(int j=2; j*j<=input; j++){
                if(input%j==0){
                    is_prime = 0;
                    break;
                }
            }
            if(is_prime==1){
                printf("소수입니다.\n");
            }
            else{
                printf("합성수입니다.\n");
            }
        }
    }
    return 0;
}