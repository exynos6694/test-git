#include <stdio.h>

int main(void) {
    long long int N,sum=0;
    scanf("%lld",&N);
    for(int i=0;i<N;i++){
        sum+=4+(3*i);
    }
    printf("%lld\n", (sum+1)%45678);
    return 0;
}
