#include <stdio.h>
 
int main() {
 
    int I, J, cont;
    I=-2;
    J=65;
        while(J>0){
            I=I+3;
            J=J-5;
            printf("I=%d J=%d\n", I, J);
        }
    
    return 0;
}