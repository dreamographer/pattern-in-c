#include<stdio.h>
void main(){
    int i,j,count=5;
    char k='A';
    for ( i = 1; i <=count; i++)
    {
        for ( j = 1; j <=count; j++)
        {
            if (i==1||j==1||i==count||j==count)
            {
                printf("* ");
            }
            else{
                printf("%c ",k++);
            }
            
        }
        printf("\n");
        
    }
    
}