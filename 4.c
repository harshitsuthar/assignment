#include<stdio.h>
#include<math.h>
int main()
{int a,b,c;
printf("enter any no. for deleting its last digit a");
scanf("%d%d",&a,&b);
a=b%10;
c=(b-a)/10;
printf("%d",c);}
