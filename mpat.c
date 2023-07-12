#include<stdio.h>
void main(){
    int i,j;
    for ( i = 1; i <=5; i++)
    {
        for ( j = 1; j < 10; j++)
        {
        
            if (j==1||j==9||i==j||i+j==10)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
        
    }
    
}