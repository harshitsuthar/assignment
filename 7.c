#include<stdio.h>
int main()
{int a,b,c,d,e,f;
printf("enter a no. for sum of last two digit");
scanf("%d",&b);
a=b%100;
c=b%10;
d=(a-c)/10;
e=d+c;
printf("%d",e);}
