#include<stdio.h>
void main(){
    int i,j,n=4;
    char k;
    for (i = 1; i <=n; i++)
    {
        k='A';
        for ( j = 1; j <=n; j++)
        {
            if (i+j<=4)
            {
                printf(" ");
            }
            else{
                printf("%c",k++);
            }
            
        }
        for ( j = 1; j <=i; j++)
        {
            printf("%d",j);
        }
        
        printf("\n");
        
    }
    
}