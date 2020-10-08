#include <stdio.h>
#include <stdlib.h>

#ifdef __FLOAT__
typedef float DATA ;
#elif defined __DOUBLE__
typedef double DATA ;
#elif defined __INT__
typedef int DATA ;
#else
typedef int DATA ;
#endif

#define N 1024

void bubble_sort(DATA fA[])
{
    int i,j;
    int K[N];
    for(i=0;i<N-1;i++) {
        for(j=0;j<N-i-1;j++) {
            if( fA[j] > fA[j+1] ) {
                int t;
                t = fA[j+1];
                fA[j+1] = fA[j];
                fA[j] = t;
            }
            K[i]++;
        }
    }
}

int main(int argv, char *argc[])
{
    int i,j, p, loop_i;
    DATA A[N];
    for(i=0;i<N;i++) {
        A[i] = N-i;
    }

    bubble_sort(A);

    for(i=0;i<N;i++) {
        printf("%5d\t%5d\n",i,A[i]);
    }
    return 0;
}
