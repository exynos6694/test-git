







int a[100][100] = {0,};







#include <stdio.h>

int main(void) {
    int num;
    for(int i = 0; i < 8; i++) {

        scanf("%d", &num); 
        
        if(i < 2 || i > 5)
            printf("%d", num);
        else
            printf("*");
    }
    
    printf("\n");
    return 0;
}

