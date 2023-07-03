#include<stdio.h>
void main(){
    int i,j,n=6;
    for ( i = 1; i <= (n*2)-1; i++)
    {
         if (i==n )
            {
                continue;
            }
        for ( j = 1; j <= n*2; j++)
        {
            if(i==j||i+j==2*n||j==1||j==n*2-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
}