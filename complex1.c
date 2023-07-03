#include<stdio.h>
void main(){
    int count=5,i,j,k;
    for ( i = 1; i <= count; i++)
    {
        k=1;
        for ( j= 1; j <=17; j++)
        {
            if ((i+j>=10) && (j<count*2) || (j-i<count*2-1 )&& (j>=2*count))
            {
                if (k==1)
                {
                    printf("%d ",i);
                    k=2;
                }
                else{
                    printf("* ");
                    k=1;
                }

                
            }
            else{
                printf("* ");
            }
            
        }
    printf("\n");
    }
    
}