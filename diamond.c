#include<stdio.h>
void main(){
    int i,j,count=5;
    for ( i = 1; i <= (count*2)-1; i++)
    {
        for ( j = 1; j <= count; j++)
        {
            if (i-j>=count || j+i <=count)
            {
                printf(" ");
            }
            else
            {
                printf("* ");
            }
            
        }
        printf("\n");
        
    }
    
}