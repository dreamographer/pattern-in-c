#include<stdio.h>
void main(){
    int i,j,n=4;
    for ( i = 1; i <= n; i++)
    {
        for (j = 1;j <=3*n-1; j++)
        {
            if (j+i>=3*i&&j<2*n-1||j-i<=(3*n)-3*i && j>=2*n-1)
            {
                printf("  ");
            }
            else{
                printf("* ");
            }
            
        }
        printf("\n");
        
    }
    
}