#include <stdio.h>

int main(void) {
    int N,c[100],sum[100];
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&c[i]);
    }


    
    for(int i=0;i<N;i++){

        for(int j=N-1;j>i-c[i];j--){
            sum[j]=sum[j-1];
        }

        sum[i-c[i]]=i+1;
    }
    for(int i=0;i<N;i++){
        printf("%d ",sum[i]);
    }
    printf("\n");


    return 0;
}
