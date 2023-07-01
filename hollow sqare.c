#include<stdio.h>
void main(){
     int i,j,row=8;
    for ( i = 1; i <= row; i++)
    {
        for ( j = 1; j<= row; j++)
        {
            if (i==1||i==row||j==1||j==row)
            {
                printf(" *");
            }
            else
            {
                printf("  ");
            }
            
        }
        printf("\n");
        
    }
    
}
