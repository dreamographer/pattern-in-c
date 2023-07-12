#include<stdio.h>
void main(){
    int i,j,count=4;
    for ( i = 1; i <= (count*2)-1; i++)
    {
        
        for ( j = 1; j <= count; j++)
        {
            if (j<=i && i<=count|| j+i <=count*2&&i>count)
            {
                printf("* ");
            }
        }
        printf("\n");
        
    }
    
}