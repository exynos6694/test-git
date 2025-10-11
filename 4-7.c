
















#include <stdio.h>

int main(void) {
    int sum=0;
    for(int i=1; i<=10000; i++){ //1부터 10000까지 반복
        sum += i; //sum에 i를 더함
        if(sum>=10000){ //sum이 10000 이상인 경우
            printf("1에서 %d까지 합이 %d입니다.\n",i-1,sum-i); //i와 sum 출력
            break; //반복문 종료
        }
    }

    return 0;
}