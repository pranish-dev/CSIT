#include<stdio.h>
int main(){
    int m[5];
    float total=0,per;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter mark of %d subject:",i+1);
        scanf("%d",&m[i]);
        if (m[i]<50){
            printf("Failed ");
            return 0;
        }
        total=total+m[i];
    }
    per=(total/500)*100;
    printf("Total mark obtained = %.2f\n",total);
    printf("Percentage = %.2f\n",per);
    if (per>=80)
    {
        printf("Congratulation Distinction\n");
    }
    else if (per<80 && per >=70)
    {
        printf("Congratulation First Division\n");
    }
    else if (per<70 && per>=60)
    {
        printf("Congratulation Second Divisoin\n");
    }
    else if (per<60 && per>=50)
    {
        printf("Congratulation Third Divisoin\n");
    }
    else
    {
        printf("Failed");
    }
    return 0;

}