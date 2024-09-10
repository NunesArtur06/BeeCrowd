#include <stdio.h>
#include <math.h>
int pilhas(int F1, int F2)
{
    if (F2 == 0)
    {
        return F1;
    }
    else
    {
        return pilhas(F2, F1 % F2);
    }
}

int main()
{

    int n, F1, F2;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &F1, &F2);
        pilhas(F1, F2);
        printf("%d\n", pilhas(F1, F2));
    }

    return 0; 
}