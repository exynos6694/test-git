#include <stdio.h>

int main(void) {
    int N,c[50][3]={0,},count=0;

    scanf("%d",&N);

    for (int i = 0; i < N; i++) {
        scanf("%d %d", &c[i][0], &c[i][1]);
        c[i][2] = 1;
    }

    for(int i=0;i<N;i++){
        for (int j=0;j<N;j++) {
            if(c[i][0]<c[j][0] && c[i][1]<c[j][1])
                c[j][2]++;
        }
    }

    // for (int i = 0; i < N; i++) {
    //     for (int j = 0; j < N; j++) {
    //         if (c[i][0] < c[j][0] && c[i][1] < c[j][1]) {
    //             c[i][2]++; // 나보다 덩치 큰 사람이 있으면 등수 +1
    //         }
    //     }
    // }

    for(int i=0;i<N;i++){
        if(i==N-1) printf("%d",c[i][2]);
        else
        printf("%d ",c[i][2]);
        
    }



    printf("\n");


    return 0;
}
