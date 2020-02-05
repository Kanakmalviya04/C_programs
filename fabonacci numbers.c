#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,b=1,c=0,n,i;
printf("enter any number\t");
scanf("%d",&n);
printf("%d",a);
printf("\n%d",b);
for(i=0;i<=n-2;i++)
{
c=a+b;
  a=b;
  b=c;
 printf("%d\n",c);
}
getch();
}
