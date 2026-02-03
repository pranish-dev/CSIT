#include<stdio.h>
int main (){
        int a,b;
    printf("Enter Order of matrix:");
    scanf("%d%d",&a,&b);
    int max[a][b],trans[b][a] ;
    printf("Enter Elements of Martix 1:");
    for ( int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d",&max[i][j]);
        }
    }
    for ( int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            trans[j][i]=max[i][j];
        }
    }
        printf("The transpose of Matrices is :\n");
    for ( int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ",trans[i][j]);
        }
        printf(" \n");
    }
}