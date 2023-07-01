#include<stdio.h>
void main() {
    int i,j=0;
    for(i=4;i>=1;i--){
        for ( j = 1; j <5+i; j++){
            if (j<=i)
            {
                printf(" ");
            }
            else{
                printf(" *");
            }
         }
        printf("\n");
        
    }

}