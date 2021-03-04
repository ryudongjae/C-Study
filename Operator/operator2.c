#include <stdio.h>

int main(void){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d\n", !a);
    printf("%d\n",a && b);
    printf("%d\n", (a>b)&&(b>c));
    return 0;
}