#include<stdio.h>
void main(){
    int i,j;
    char a[5]={'I','N','D','I','A'};
    for ( i = 1; i <=5; i++)
    {
        for ( j = 0; j <i; j++)
        {
            printf("%c ",a[j]);
             
        }
        printf("\n");
        
    }
    
}