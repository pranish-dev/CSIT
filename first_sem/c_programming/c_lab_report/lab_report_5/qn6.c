#include<stdio.h>
int main (){
        int a,b;
    printf("Enter Order of matrix:");
    scanf("%d%d",&a,&b);
    int max[a][b],trans[b][a] ;
   
    for ( int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("Enter element row %d and column %d: ",i+1,j+1);
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
    for ( int i = 0; i < b; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ",trans[i][j]);
        }
        printf(" \n");
    }
    return 0;
}