#include<stdio.h>
void main(){
    int i,j,k,count=3;
    for ( i = 1; i <=count; i++)
    {
        for ( j = 0; j < 3;j++)
        {
            printf("*\n");
        }
        for(k=1;k<=i;k++){
            printf("***\n");
           
        }
        
    } 
       
}