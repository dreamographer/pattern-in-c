#include<stdio.h>
int main() {
    int i,k=1,j,l;
    for ( i = 1; i <=3; i++)
    {
        for ( j = 1; j <=k; j++)
        {
            printf("*\n");
        }
        k+=2;
        for ( l=1; l <=i*2; l++)
        {
            printf("*");
        }
        
    }
    return 0;
}