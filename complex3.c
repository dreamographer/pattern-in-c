#include<stdio.h>
#include<string.h>
void main(){
    int i,j,row,col,c;
    int n=4;
    char a[100][100],str[100]={'H','E','L','L','O','W','o','R','L','D','k','d','w','i','l','y','j'};
    int len=strlen(str);
    for ( i =0; i <n; i++)
    {
        for ( j = 0; j < len; j++)
        {
            a[i][j]=' ';
        }
    }
    row=-1;
    col=0;
    c=n-1;
    for ( i = 0; i <len; i++)
    {
        if (row<n-1 && c==n-1)
        {
            
            a[++row][col]=str[i];
        }
        else{
            c=c==n-1?1:c+1;
            a[--row][++col]=str[i];
        }
    }
    for ( i =0; i <n; i++)
    {
        for ( j = 0; j <=col; j++)
        {
            printf("%c ",a[i][j]);
        }
        printf("\n");
    }
    
    
}