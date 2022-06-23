#include<stdio.h>
int main()
{
   printf(“risha\n”);
    int row,col,i,j,a[10][10],count=0;
    printf("enter row\n");
    scanf("%d",&row);
    printf("enter collumn\n");
    scanf("%d",&col);
    printf("enter element of matrix 1 \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("element are:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(a[i][j]==0)
            count++;
        }
    }
    if(count>(row*col)/2)
    printf("matrix is a square\n");
    else
    printf("matrix is not a square");
}
