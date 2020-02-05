#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("enter 3 numbers\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
if(a>c)
{
printf("a is bigger than b and c",a);
}
}
if(b>c)
{
printf("b is bigger than a and c",b);
}
if(c>b)
{
if(c>a)
{
printf("c is bigger than b and a ",c);
}
}
getch();
}
