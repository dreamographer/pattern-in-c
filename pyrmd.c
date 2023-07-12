#include<stdio.h>
void main(){
    int i,j,n=4;
    for ( i = 1; i<=n*2-1; i++)
    {
        for ( j = 1;j<=2*n-1; j++)
        {
            if (j+i<=4|| i-j>=4||i+j>=12||j-i>=4)
            {
                printf(" ");
            }
            else{
                printf("*");
            }
            
        }
        printf("\n");
        
    }
    
}