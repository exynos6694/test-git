















#include <stdio.h>

int main(void) {
    int num;
    for(int i = 0; i < 8; i++) {

        scanf("%d", &num); // 한 자리씩 입력받기

        // 앞 2자리와 마지막 2자리는 그대로 출력
        if(i < 2 || i > 5)
            printf("%d\n", num);
        else
            printf("*\n");
    }
    
    printf("\n");
    return 0;
}