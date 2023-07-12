#include<stdio.h>
void main() {
    int j, i;
    for ( i = 4; i >=1; i--)
    {
        for ( j= 1; j <=4; j++)
        {
            if ((j+i)<=5)
            {
                printf("%d ",j);
            }
            else
            {
                printf("* ");
            } 
        }
         for ( j= 4; j >=1; j--)
        {
            if ((j+i)<=5)
            {
                printf("%d ",j);
            }
            else
            {
                printf("* ");
            } 
        }
        printf("\n");
        
    }
    
}
    