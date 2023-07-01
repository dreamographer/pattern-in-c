#include<stdio.h>
void main(){
    int i,j,n=4;
    for ( i = 1; i <= (n*2)-1; i++)
    {
        for ( j = 1; j <= n*2; j++)
        {
            if(i==j||i+j==2*n){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
}