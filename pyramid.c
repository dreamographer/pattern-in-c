#include<stdio.h>
void main() {
    int j, i;
    for ( i = 1; i <=5; i++)
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
    