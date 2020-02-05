#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,x,l=1;
printf("enter any two numbers\n");
scanf("%d%d",&a,&b);
for(x=2;a>1||b>1;x++)
{
while(a%x==0||b%x==0)
{
if(a%x==0)
{
a=a/x;
}
if(b%x==0)
{
b=b/x;
}
l=l*x;
}
}
printf("LCM is :%d\n",l);
getch();
}
