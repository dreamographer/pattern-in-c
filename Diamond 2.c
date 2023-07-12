#include<stdio.h>
void main(){
    int i,j,count=5,k;
    for ( i = 1; i <= 2*count-1; i++)
    {
        k=1;
        for ( j = 1; j<=2*count-1; j++)
        {
            if (i+j<=count ||j-i >=count||i-j>=count||i+j>=count*3)
            {
                printf("  ");
            }
            else{
                printf("%d ",k++);   
            }
        }
        printf("\n");
        
    }
    
}