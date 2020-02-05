#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,x,l=1;
printf("enter any four numbers\n");
scanf("%d%d%d%d",&a,&b,&c,&d);
for(x=2;a>1||b>1||c>1||d>1;x++)
{
while(a%x==0||b%x==0||c%x==0||d%x==0)
{
if(a%x==0)
{
a=a/x;
}
if(b%x==0)
{
b=b/x;
}
if(c%x==0)
{
c=c/x;
}
if(d%x==0)
{
d=d/x;
}
l=l*x;
}
}
printf("LCM is :%d\n",l);
getch();
}
