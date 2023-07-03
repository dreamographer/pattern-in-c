#include<stdio.h>
void main(){
    int i,j,k,count=4,m=1;
    for ( i = 1; i <= count; i++)
    {
        for ( j = 1; j<=2*count; j++)
        {
            if (j==count)
            {
                printf("0 ");
                continue;
            }
            
            if (i+j<=count && j<count || j>count && j-i >=4)
            {
                printf(" ");
            }
            else{
                printf("*");   
            }
            
            printf(" ");
        }
        
        printf("\n");
        
    }
    
}