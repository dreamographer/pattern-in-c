#include<stdio.h>
void main(){
    int i,j,count=7;
    for ( i = 1; i <= (count*2)-1; i++)
    {
        if (i%2==0)
        {
            continue;
        }
        
        for ( j = 1; j <= count; j++)
        {
            if (i-j>=count || j+i <=count)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
            
        }
        printf("\n");
        
    }
    
}