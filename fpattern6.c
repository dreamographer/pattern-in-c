#include<stdio.h>
void main(){
    int k=1,l=4,b=0,i,j,m;
    for ( i = 1; i <=5; i++)
    {
        for ( j = 1; j<=k; j++)
        {
            printf("*\n");
        }
        if (i==5)
        {
            break;
        }
        if (k==1)
        {
            k=2;
        }
        else{
            k=1;
        }       
        b=b+l;
        for ( m = 1; m <=b; m++)
        {
            printf("*");
        }
        printf("\n");
        if (i==1)
        {
            continue;
        }
        if (l==4)
        {
            l=2;
        }
        else{
            l=4;
        }
    }
    
}