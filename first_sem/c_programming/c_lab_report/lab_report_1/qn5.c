#include<stdio.h>
int main (){
    int op;
    printf("1.Fahrenheit to Celcius\n2.Celcius to Fahrenheit:\n");
    printf("Select Option:");
    scanf("%d",&op);
    if (op==1){
        float temp,r;
        printf("Enter Temperature:");
        scanf("%f",&temp);
        r=5.0/9*(temp-32);
        printf("%.2f Fahrenheit = %.2f Celcius\n",temp,r);
    }
    else if (op==2){
    	float temp,r;
    	printf("Enter Temperature:");
        scanf("%f",&temp);
        r=(9.0/5*temp)+32;
        printf("%.2f Celcius = %.2f Fahrenheit\n",temp,r);
    }
    else{
        printf("Invalid Option\n");
    }
    return 0;
}
