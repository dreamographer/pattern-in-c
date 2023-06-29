#include<stdio.h>
void main() {
    int j, i;
    for ( i = 5; i >=1; i--)
    {
        for ( j= 1; j <=5; j++)
        {
            if ((j+i)>5)
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
    