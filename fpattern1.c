#include<stdio.h>
void main(){
    int i,j,k,count=3;
    for ( i = 1; i <=count; i++)
    {
        for ( j = 1; j <=(i*i)*2; j++)
        {
            
            printf("*");
            if (j%(i*2)==0)
            {
                printf("\n");
            }
            
        }
        if (i==count)
        {
            break;
        }
        
        for ( k = 0; k < 3; k++)
        {
            printf("*\n");
            
        }
        
    }
    
}