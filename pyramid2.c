#include<stdio.h>
void main(){
    int i,j,k,count=4,m=1;
    for ( i = 1; i <= count; i++)
    {
        for ( j = i; j<=count-1; j++)
        {
            printf(" ");
        }
        
        for ( k = 1; k <=m; k++)
        {
                printf("*");   
        }m+=2;
        printf("\n");
        
    }
    
}