#include<stdio.h>
void main(){
    int i,j,k,m=1,l;
    for(i=1;i<=4;i++){
        for ( j =1; j <=4; j++)
        {
            if(j<i){
                printf("  ");
            }
            else{
                printf(" %d",m++);
            }

        }
        printf(" ");
        l=(20-m)+2;  
        for ( k = 1; k<=5-i; k++)
        {
                printf(" %d",l);
                l++;
           
        }
        printf("\n");
        
        
    }
}