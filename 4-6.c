
















#include <stdio.h>

int main(void) {
    int x;
    printf("정수 입력 >> ");
    scanf("%d",&x);
    printf("입력한 수를 반대로 출력 >>> ");
    do{
        printf("%d",x%10); //x의 일의 자리 출력
        x /= 10; //x를 10으로 나눔

    } while(x>0);

    printf("\n");

    return 0;
}