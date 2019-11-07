#include<stdio.h>
int main()
{int a,b,c,d,e;
printf("enter any digit to exchange its last two digit");
scanf("%d",&b);
a=b%100;
c=b%10;
e=(a-c)/10;
d=(b-a)+(c*10)+e;
printf("%d",d);}
