#include <stdio.h>
void troca(int *a, int *b){ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
} 
void bubblesort(int *array, int n){
    if(n < 1)return;

    for (int i=0; i<n-1; i++){ 
        if (array[i] > array[i+1]){ 
            troca(&array[i], &array[i+1]);  
        } 
    }   
    bubblesort(array, n-1); 
}

int main() {
    int n;
    scanf("%d", &n);
    int array[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    bubblesort(array, n);

    for(int i = 0; i < n; i++){
        int cont = 1;
        for(int j = i+1 ; j < n; j++){
            if(array[i] == array[j]){
                cont++;
                i=j;
            }
        }
        printf("%d aparece %d vez(es)\n", array[i], cont);
    }
    
    return 0;
}