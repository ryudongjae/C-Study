#include <stdio.h>

int main(void){
    printf("손님이 몇 명 왔나요?");
    int a;
    scanf("%d",&a);
    if (a == 1 || a ==2)
    {
        printf("2인석으로 안내합니다. \n");
    }
    else if (a == 3||a==4)
    {
        printf("4인석으로 안내합니다.\n");
    }
    else {
        printf("대형석으로 안내합니다. \n");
    }
    return 0;
}