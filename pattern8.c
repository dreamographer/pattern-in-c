#include<stdio.h>
void main(){
    int i,j,l,k=3;
    for ( i = 1; i <=3; i++)
    {
        for ( j= 1; j <=k; j++)
        {
            for ( l = 1; l<=j; l++)
            {
                printf("* ");
            }
            printf("\n");
            
        }
        k++;
    }
    
}