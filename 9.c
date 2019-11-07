#include<stdio.h>
int main()
{int a,b,c,d;
printf("enter a no. to delete second last digit");
scanf("%d",&b);
a=b%100;
c=b%10;
d=((b-a)/10)+c;
printf("%d",d);}
