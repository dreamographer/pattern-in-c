//c program to print buttterfly pattern
#include<stdio.h>
void main(){
    int i,j,n=7;
    for ( i = 1; i <=n*2-1; i++)
    {
        for ( j = 1; j <= n*2; j++)
        {
            if (j<=i && i<=n || j+i>n*2&& i<=n||j+i<=n*2 && i>n||j>i&&i>n)
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
