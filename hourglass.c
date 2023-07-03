#include<stdio.h>
void main(){
    int i,j,row=4;
    for ( i = 1; i <=(row*2)-1; i++)
    {
        for ( j = 1; j <=row; j++)
        {
            if(j>=i || (j+i)>=(row*2)){
                printf("* ");
            }
            else{  
                printf(" ");
            }
        }
        printf("\n");
    }
    
}