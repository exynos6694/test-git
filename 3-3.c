
















#include <stdio.h>

int main(void) {
    int count=0;
    for(int i=1; i<=100; i++){ //1부터 100까지 반복
        if(i%2==0 || i%3==0 || i%5==0 || i%7==0) //2,3,5,7의 배수인 경우
            continue; //반복문의 처음으로 돌아감
        
        printf("%d\t",i);
        count++;
        if(count%10==0) //10개마다 줄바꿈
            printf("\n");
        
    }
    printf("\n");
    return 0;
}