#include<stdio.h>
int main(){
    int usr;
    printf("Enter N numbers: ");
    scanf("%d",&usr);
    int n[usr],i,item;
    for(i=0;i<usr;i++){
        printf("Enter number %d: ",i+1);
        scanf("%d",&n[i]);
    }
    printf("Enter item to search:");
    scanf("%d",&item);
    for ( i = 0; i < usr; i++)
    {
        if (item==n[i])
        {
            printf("%d found on index is %d and position is %d\n",item,i,i+1);
        }
        
    }
    return 0;
}