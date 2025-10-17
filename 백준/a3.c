#include <stdio.h>

int main(void) {
    int N,a,b,sum[100][100]={0,},count=0;

    scanf("%d",&N);

    for(int j=0;j<N;j++){
        scanf("%d %d",&a,&b);
        for (int i=a;i<=a+9;i++) {
            for (int j=b;j<=b+9;j++) {
                if(sum[i][j] == 1) continue;
                sum[i][j]=1;
                count++;
            }
        }
    }

    printf("%d\n",count);


    return 0;
}
