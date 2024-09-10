#include <stdio.h>

 
int main() {
    
    char A[15];
    char B[15];
    char C[15];

    scanf("%s", A);
    scanf("%s", B);
    scanf("%s", C);

    if(A[0]=='v'){

        if(B[0]=='a'){

            if(C[0]=='c'){
                printf("aguia\n");
            }
            
            if(C[0]=='o'){
                printf("pomba\n");
            }

        }if(B[0]=='m'){
            if(C[0]=='o'){
                printf("homem\n");
            }
            
            if(C[0]=='h'){
                printf("vaca\n");
            }
        }
    } 
    if(A[0]=='i'){
        if(B[0]=='i'){

            if(C[2]=='m'){
                printf("pulga\n");
            }
            
            if(C[2]=='r'){
                printf("lagarta\n");
            }

        }if(B[0]=='a'){
            if(C[0]=='h'){
                printf("sanguessuga\n");
            }
            
            if(C[0]=='o'){
                printf("minhoca\n");
            }
        }
    }
    


    return 0;
}