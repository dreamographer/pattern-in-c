#include<stdio.h>
void main() {
    int j, i;
    for ( i = 1; i <=6; i++)
    {
        for ( j= 1; j <=6; j++)
        {
            if ((j+i)==7||i==6||j==6)
            {
                printf("* ");
            }
            else if((j+i)>7)
            {
                printf("  ");
            } 
            else{
                printf(" ");
            }
        }
        printf("\n");
        
    }
    
}
    