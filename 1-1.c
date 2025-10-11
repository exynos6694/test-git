#include <stdio.h>

int main(void) {
    
    double a1, a2;
    char d;
    printf("3.4+4.5와 같이 두 실수와 연산자를 붙여서 입력 >> ");
    scanf("%lf%c%lf",&a1,&d,&a2);
    //입력받은 연산자 구분
    if(d=='+'){
        printf("%.2f + %.2f = %.2f",a1,a2,a1+a2); //연산결과 소수점 둘째자리까지 출력
    }
    else if(d=='-'){
        printf("%.2f - %.2f = %.2f",a1,a2,a1-a2);
    }
    else if(d=='*'){
        printf("%.2f * %.2f = %.2f",a1,a2,a1*a2);
    }
    else if(d=='/'){
        printf("%.2f / %.2f = %.2f",a1,a2,a1/a2);
    }
    else if(d=='%'){
        int x = (int)a1;
        int y = (int)a2;
        printf("%.2f %% %.2f = %d",a1,a2,x%y);
    }
    printf("\n");
    
    return 0;
}