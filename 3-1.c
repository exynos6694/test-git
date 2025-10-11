






#include <stdio.h>

int main(void) {

    int x, sum=0;
    printf("양의 정수 입력: ");

    scanf("%d",&x);
    for(int i=1; i<=x; i++){ //1부터 x까지 반복
        sum += i; //sum에 i를 더함
        }

    printf("\n1에서 %d까지 합 %d입니다.\n",x,sum);

    return 0;
}