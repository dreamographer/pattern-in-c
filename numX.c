#include<stdio.h>
void main(){
    int i,j;
    for ( i = 1; i <=9; i++)
    {
        for ( j = 1; j<=9; j++)
        {
            if ((i==j ||i+j==10)&& i<=5)
            {
                printf("%d ",i);
            }else if (i+j==10 && i>5)
            {
                printf("%d ",j);
            }
            else if (i==j&& i>5)
            {
                printf("%d ",10-i);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
        
    }
    
}