#include <stdio.h>

int main(){
    int i, j = 0 , k , n , m;
    printf("점수를 입력하세요 : ");
    scanf("%d",&k); //키보드 입력

    n = k/10; //연산 - 나누기
    m = k%10; //연산 - 나머지

    if(k <= 60)
        printf("점수 %d점은  기준 미달입니다",k);
    if(k > 60)
        printf(" 합격입니다. ",k);

}