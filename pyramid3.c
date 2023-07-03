#include<stdio.h>
void main(){
    int i,j;
    for ( i = 1; i <=5; i++)
    {
        for ( j = 1; j <=9; j++)
        {
            if (j-i==4 &&j>5 || j+i==6 && j<=5||i==5)
            {
                printf("*");
            }
            else{
                printf(" ");
            }

            
        }
        printf("\n\n");
        
    }
    
}