#include <stdio.h>
void main(){
    int i,j,n=5;
    for ( i = 1; i <=n; i++)
    {
        for ( j = 1; j <=n*2-1; j++)
        {
            if (i+j==n+1||j-i==n-1)
            {
                printf("*");
            }
            else if (i+j>=n+2&&j-i<=n-2)
            {
                printf("_");
            }
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");
        
    }
    
}