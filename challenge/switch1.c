#include <stdio.h>

int main(void){
    printf("월을 입력하세요.");
    int a;
    scanf("%d",&a);
    switch (a)
    {
    case 1: case 2: case 3:
        printf("봄\n"); break;
    case 4: case 5: case 6:
        printf("여름\n"); break;
    case 7: case 8: case 9:
        printf("가을\n"); break;
    case 10: case 11: case 12:
        printf("겨울\n"); break;
    
    }
}