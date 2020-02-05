#include<stdio.h>
#include<conio.h>
void main()
{
int n,x,sum,a,r=0;
printf("enter any number : ");
scanf("%d",&n);
a=n%10;
while(n>0)
{
r=r*10;
r=r+n%10;
n=n/10;
}
x=r%10;
sum=x+a;
printf("revers string : %d\n",r);
printf("sum is : %d",sum);
getch();
}
