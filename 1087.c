#include <stdio.h>

int main() {
    int x1, y1, x2, y2;
    
    do {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        
        if (x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0)  
            break;
        
        int diffX = x2 - x1; 
        int diffY = y2 - y1;
        
        if (diffX < 0) diffX = -diffX; 
        if (diffY < 0) diffY = -diffY; 
        
        if (x1 == x2 && y1 == y2) { 
            printf("0\n");
        } else if (x1 == x2 || y1 == y2 || diffX == diffY) { 
            printf("1\n");
        } else { 
            printf("2\n");
        }
    } while (1);
    
    return 0;
}
