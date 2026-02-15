#include<stdio.h>
int main (){
    int a,b;
    printf("Enter Order of matrix:");
    scanf("%d%d",&a,&b);
    int max1[a][b],max2[a][b],sum[a][b] ;
    for ( int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("Enter element of 1st matrix row %d and column %d: ",i+1,j+1);
            scanf("%d",&max1[i][j]);
        }
        
    }
    for ( int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("Enter element of 2nd matrix row %d and column %d: ",i+1,j+1);
            scanf("%d",&max2[i][j]);
        }
        
    }
    for ( int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
           sum[i][j]=max1[i][j]+max2[i][j];
        }
    }
    printf("The sum of Matrices is :\n");
    for ( int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ",sum[i][j]);

        }
        printf(" \n");
    }
    return 0;
}