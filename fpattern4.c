#include<stdio.h>
void main(){
    int i,j,k;
    for ( i = 1; i <=3; i++)
    {
        for ( j = 1; j <=6*i; j++)
        {
            printf("*");
            if (j%(i*3)==0)
            {
                printf("\n");
            }
            
        }
        if(i==3)
            break;
        for ( k = 1; k<=i; k++)
        {
            printf("*\n");
        }
        
    }
    
}