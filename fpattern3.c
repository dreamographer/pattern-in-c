#include<stdio.h>
void main(){
    int i,j,k,count=4;
    for ( i = 1; i <= count; i++)
    {
        for ( j = 1; j <= i*2; j++)
        {
            printf("*");
            if (j==i)
            {
                printf("\n");
            }
            
        }
         printf("\n");
        for ( k = 1; k <=i*3; k++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
}