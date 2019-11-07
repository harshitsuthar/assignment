#include<stdio.h>
int main()
{int a,b,c;
printf("enter a no. for deleting its last digit");
scanf("%d",&b);
a=b%100;
c=(b-a)/100;
printf("%d",c);}
