#include<stdio.h>
void main(){
    int i,j,k=13,n=7;
    for ( i = 0; i < n; i++)
    {
        for ( j = 1; j <= n*2-i;j++)
        {
            printf("*");
            if (j==k)
            {
                printf("\n");
                k-=2;
            }
            if (i==6)
            {
                break;
            }
            
        }
        printf("\n");
        
    }
    
}