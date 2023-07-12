#include<stdio.h>
void main(){
    int i,j,n=5;
    for ( i = 1; i <=n*2-1; i++)
    {
        for ( j = 1; j <=n*2-1; j++)
        {
            if (i+j==n+1||i-j==n-1||j-i==n-1||i+j==n*3-1)
            {
                printf("* ");
            }
            else{
                printf("  ");
            }

        }
        printf("\n");
        
    }
    
}