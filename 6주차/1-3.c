#include <stdio.h>



int main(void) {
    
    double x, y;
    printf("두 실수 입력 >> ");
    scanf("%lf %lf",&x,&y);

    if(x>0 && y>0){ //and 연산자로 조건 비교
        printf("%lf",x+y); //두 수가 모두 양수일 때
    }
    else if(x>0 && y<=0){
        printf("%lf",x-y); //x는 양수, y는 음수일 때
    }
    else if(x<=0 && y>0){
        printf("%lf",-x+y); //x는 음수, y는 양수일 때
    }
    else if(x<=0 && y<=0){
        printf("%lf",-x-y); //두 수가 모두 음수일 때
    }
    printf("\n");
    
    
    return 0;
}