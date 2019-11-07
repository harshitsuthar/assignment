#include<stdio.h>
int main()
{int a,b,c,d;
printf("double of last digit which you will enter");
scanf("%d",&b);
a=b%10;
c=b-a;
d=(a*2)+c;
printf("%d",d);}
