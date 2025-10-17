










#include <stdio.h>

int main(void) {

    int x, y;
    printf("년과 월을 다음과 같이 입력하면 그 달의 말일을 알려드립니다. \n 2003 2 : 입력 >> ");

    scanf("%d %d",&x,&y);
    
    switch(y){ //switch문으로 조건 비교
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: //31일인 달
            printf("%d년 %d월의 말일은 31일 입니다.\n",x,y);
            break;
        case 4: case 6: case 9: case 11: //30일인 달
            printf("%d년 %d월의 말일은 30일 입니다.\n",x,y);
            break;
        case 2: //2월인 경우
            if(x%4==0 && x%100!=0 || x%400==0){ //윤년인 경우
                printf("%d년 %d월의 말일은 29일 입니다.\n",x,y);
            }
            else{ //윤년이 아닌 경우
                printf("%d년 %d월의 말일은 28일 입니다.\n",x,y);
            }
            break;
    }
    
    return 0;
}