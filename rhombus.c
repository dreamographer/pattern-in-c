#include<stdio.h>
void main() {
    int i,j=0;
    for(i=0;i<4;i++){
        for ( j = 1; j <=5+i; j++){
            if (j<=i)
            {
                printf(" ");
            }
            else{
                printf("*");
            }
         }
        printf("\n");
        
    }

}