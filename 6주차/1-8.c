










#include <stdio.h>

int main(void) {
    
    int x;
    printf("년도입력: ");
    scanf("%d",&x);
    
    if(x%4==0 && x%100!=0 || x%400==0){ //4로 나누어 떨어지고 100으로 나누어 떨어지지 않거나 400으로 나누어 떨어지는 해는 윤년
        printf("%d년은 윤년입니다.\n",x);
    }
    else{
        printf("%d년은 윤년이 아닙니다.\n",x);
    }
    
    return 0;
}