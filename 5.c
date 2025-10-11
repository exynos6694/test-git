















#include <stdio.h>

int main(void) {
    int pw[8]; // 비밀번호 8자리 저장용 배열

    printf("8자리 비밀번호를 한 자리씩 입력하세요:\n");
    for(int i = 0; i < 8; i++) {
        scanf("%d", &pw[i]);
    }

    printf("출력 결과: ");
    for(int i = 0; i < 8; i++) {
        if(i < 2 || i > 5)
            printf("%d", pw[i]);
        else
            printf("*");
    }
    printf("\n");

    return 0;
}