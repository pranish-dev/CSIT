#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    int *arr;
    printf("Enter a Number:");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
        printf("%d \n",arr[i]);
    free(arr);
    return 0;
}