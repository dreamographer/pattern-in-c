#include<stdio.h>
void main(){
    int i,j,k,m=1,l=1;
    printf("*\n");
    for ( i =1; i <=5; i++)
    {
        printf("* ");
        k=0;
        for ( j = 1; j<=m; j++)
        {
            if (j<=l)
            {
                k++;
                printf("%d ",k);
            }
            else{
                k--;
                printf("%d ",k);
                }
        }
        l=i<3?l+1:l-1;
        m=i<3?m+2:m-2;
        printf("*\n");
    }
    printf("*");
    
}