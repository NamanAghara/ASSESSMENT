#include<stdio.h>
int main()
{
    int row,col,a[10][10],b[10][10],ans[10][10],temp=1;
    int i,j,k;
    printf("\nEnter the row count = ");
    scanf("%d",&row);
    printf("\nEnter the col count = ");
    scanf("%d",&col);
    
    printf("\nEnter the elements in array a");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\nEnter the %d element = ",temp++);
            scanf("%d",&a[i][j]);
        }
    }

    temp = 1;
    printf("\nEnter the elements in array b");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\nEnter the %d element = ",temp++);
            scanf("%d",&b[i][j]);
        }
    }

    //Multiplication
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            ans[i][j]=0;
            for(k=0;k<col;k++)
            {
                ans[i][j] = ans[i][j] + (a[i][k] * b[k][j]); 
            }
        }
    }

    printf("\nMatrix a\n");
    printf("-----------\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix b\n");
    printf("-----------\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    
    printf("\nFinal Matrix:\n");
    printf("---------------\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d\t", ans[i][j]);
        }
        printf("\n");
    }


}
