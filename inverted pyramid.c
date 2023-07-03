#include<stdio.h>
void main() {
    int j, i;
    for ( i = 10; i >=1; i-=2)
    {
    
        for ( j= 1; j <=10; j++)
        {   
            if ((j+i)>10)
            {
                printf("* ");
            }
            else
            {
                printf(" ");
            } 
        }
        printf("\n");
        
    }
    
}
    