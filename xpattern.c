#include<stdio.h>
void main(){
    int i,j,n=4;
    for ( i = 1; i <= (n*2)-1; i++)
    {
        for ( j = 1; j <= n*2-1; j++)
        {
            if(i+j>=2*n&&j<=i||i+j==2*n||i==j||i==1||j==1||i==2*n-1||j==2*n-1){
                printf("* " );
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    
}