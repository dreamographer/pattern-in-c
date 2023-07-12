#include<stdio.h>
void main(){
    int i,j,k,n=6;
    for ( i = 1; i <=n; i++)
    {
        k=0;
        for ( j = 1; j <=2*i; j++)
        {
            if (j>i)
            {
                printf("%d ",k--);
            }
            else{
                ++k;
                printf("%d ",k);
            }            
        }
        printf("\n");
        
    }
    
}