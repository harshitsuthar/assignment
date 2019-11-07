#include<stdio.h>
int main()
{int a,b,c,d,e,f;
printf("enter a no. for showing second last digit");
scanf("%d",&b);
a=b%10;
c=b%100;
d=(c-a)/10;
printf("%d",d);}
