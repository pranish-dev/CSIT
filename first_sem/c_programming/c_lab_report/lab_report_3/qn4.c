#include<stdio.h>
int main (){
    int choice;
    float x,y;
    printf("        MENU          \n-------------------\n1. ADD\n2. SUBTRACT\n3. MULTIPLY\n4. DIVIDE\n5. EXIT\nEnter Option(1-5):");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("Enter 2 numbers:");
        scanf("%f%f",&x,&y);
        printf("The Addition of %.2f and %.2f is %.2f\n",x,y,x+y);
        break;
    case 2:
        printf("Enter 2 numbers:");
        scanf("%f%f",&x,&y);
        printf("The Subtraction of %.2f and %.2f is %.2f\n",x,y,x-y);
        break;
    case 3:
        printf("Enter 2 numbers:");
        scanf("%f%f",&x,&y);
        printf("The Multiplication of %.2f and %.2f is %.2f\n",x,y,x*y);
        break;
    case 4:
        printf("Enter 2 numbers:");
        scanf("%f%f",&x,&y);
        printf("The Divison of %.2f and %.2f is %.2f\n",x,y,x/y);
        break;
    case 5:
        return 0;
    default:
        printf("Invalid Option\n");
        break;
    }
    return 0;
}