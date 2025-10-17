


#include <stdio.h>

int main(void) {
    
    int x;
    printf("년도의 월(month)을 입력하세요. >>  ");
    scanf("%d",&x);
    
    if(x==1 || x==2 || x==3){ //or 연산자로 조건 비교
        printf("%d월(month)은 1분기입니다.",x); //1,2,3월은 1분기
    }
    else if(x==4 || x==5 || x==6){
        printf("%d월(month)은 2분기입니다.",x); //4,5,6월은 2분기
    }
    else if(x==7 || x==8 || x==9){
        printf("%d월(month)은 3분기입니다.",x); //7,8,9월은 3분기
    }
    else if(x==10 || x==11 || x==12){
        printf("%d월(month)은 4분기입니다.",x); //10,11,12월은 4분기
    }
    printf("\n");
    
    
    return 0;
}