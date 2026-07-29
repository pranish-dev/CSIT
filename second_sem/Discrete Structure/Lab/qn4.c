#include<stdio.h>
void euclidean(){
     printf("Enter 2 numbers to find GCD:");
    int a,b,r;
    scanf("%d%d",&a,&b);
    while(b!=0){
        r=a%b;
        a=b;
        b=r;
    }
    printf("GCD: %d",a);
}
void extended(){
    printf("Enter 2 numbers to find GCD:");
    int a,b,q,r,s,s1=1,s2=0,t,t1=0,t2=1,tempa,tempb;
    scanf("%d%d",&a,&b);
    tempa=a;
    tempb=b;
    while(b!=0){
        q=a/b;
        r=a%b;
        s=s1-s2*q;
        t=t1-t2*q;
        a=b;
        b=r;
        s1=s2;
        s2=s;
        t1=t2;
        t2=t;
    }
    printf("GCD using a*s1+b*t1:%d\n",tempa*s1+tempb*t1);
    printf("GCD:%d S1:%d S2:%d T1:%d T2:%d",a,s1,s2,t1,t2);

}
int main(){
    int choice;
    printf("1.For Euclidean Algorithm\n2.For Extended Euclidean Algorithm");
    printf("\nEnter Choice:");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
       euclidean();
        break;
    case 2:
        extended();
        break;
    default:
    printf("Invalid Option!!!!!!!!!!!");
        break;
    }
    return 0;
}