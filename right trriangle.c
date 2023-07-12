#include<stdio.h>
void main(){
    int i,j,n=5;
    for(i=1;i<=2*n;i++){
        for ( j = 1; j <=2*n-1; j++)
        {
            if (j<=abs((2*n)-(i*2)))
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