#include<stdio.h>
int main() {
    int i,j,n=4,start=0,size=2*n-1,end=size-1;
    int a[50][50];
    while (n!=0)
    {
        for ( i = start; i <=end; i++)
        {
            for ( j = start; j <=end; j++)
            {
                if (i==start || j==start || i==end || j==end)
                {
                    a[i][j]=n;
                
                }
                
            }
            
        }
        start++;
        end--;
        n--;
    }
    //printing the pattern
    printf("The Pattern is:\n");
    for(i=0 ; i<size; i++){
        for(j=0 ; j<size; j++){

            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
            return 0;
}