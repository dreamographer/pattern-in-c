#include<stdio.h>
void main(){
    int i,j,n=5;
    char k;
    for ( i = n; i >=1; i--)
    {
        k='A';
        for ( j= 1; j <=5; j++)
        {
            if (j+i<=n)
            {
                printf(" ");
            }
            else{
                printf("%c ",k++);
            }
            
        }
        printf("\n");
        
    }
    
}