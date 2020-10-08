#include <stdio.h>
#include <stdlib.h>

typedef int DATA ;
#define N 1024

int main(int argv, char *argc[])
{
    int i,j;
    DATA A[N];
    for(i=0;i<N;i++) {
        scanf("%d",&j);
        A[i] = j;
    }

    for(i=0;i<N;i++) {
        printf("%5d\t%5d\n",i,A[i]);
    }
    return 0;
}
