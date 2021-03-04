#include <stdio.h>

int main(void){
    int size;
    printf("메인 메모리 크기를 입력하세요. (GB)");
    scanf("%d",&size);
    if(size >= 16){
        printf("메인 메모리 크기가 충분합니다.\n");
    }
    else{
        printf("메인 메모리를 증설 하세요.\n");
    }
    return 0;
}