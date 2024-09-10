#include <stdio.h>
#define MAX_N 10000

int main() {
    
    int N, M, T;

        while(scanf("%d %d", &N, &M) == 2 && (N != 0 || M != 0)){
            int clones=0;
                int array[MAX_N +1]={0};

            
            for(int i=0;i<M;i++){
                scanf("%d", &T);
                array[T]++;
            }
            
            for (int i = 1; i <= N; i++) {
            if (array[i] > 1) {
               clones++;
            }
        }
            
        printf("%d\n", clones);
            
        }
    
    
    

    return 0;
}