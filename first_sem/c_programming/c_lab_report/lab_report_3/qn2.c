#include<stdio.h>
int main(){
    float sp, cp, p_l;
    printf("Enter Cost Price and Selling price:");
    scanf("%f%f",&cp,&sp);
    if(sp>cp){
        p_l=sp-cp;
        printf("Profit is %f\n",p_l);
    }
    else if (cp>sp)
    {
        p_l=cp-sp;
        printf("Loss is %f \n",p_l);
    }
    else
        printf("Neither profit nor loss\n");
    return 0;
}