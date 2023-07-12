#include<stdio.h>
void main(){
    int i,j,k=1,n=3;
    for ( i = 1; i <=n; i++) //outer loop
    {
        for ( j = 1; j<=k; j++)
        {
            printf("*\n");

        }
        k+=2;
        for ( j = 1; j <=2*i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}