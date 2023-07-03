#include <stdio.h>
void main(){
    int i,j,n=10;
    for ( i = 1; i <=n; i++)
    {
        if (i%2==0)
        {
            continue;
        }
        
        for ( j = 0; j < n*2-1; j++)
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