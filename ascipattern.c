#include<stdio.h>
void main(){
    int i,j,n=5;
    char k=97;
    for ( i = 1; i <=n; i++)
    {
        for ( j = 1; j <=i; j++)
        {
            printf("%c",k++);
            if (k>90)
            {
                k-=32;
            }
            else{
                k+=32;
            }
            
        }
        printf("\n");
        
    }
    
}