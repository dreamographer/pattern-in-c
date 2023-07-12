#include<stdio.h>
void main(){
    int i,j,k=0;
    char b='@';
    for ( i = 1; i <=6; i++)
    {
        i%2==0?k++:b++;
        for ( j = 1; j <=i; j++)
        {
            i%2==0?printf("%d ",k):printf("%c ",b);
        }
        printf("\n");
        
    }
    
}