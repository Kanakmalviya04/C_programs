#include<stdio.h>
#include<conio.h>
void main()
{
int n,r=0;
printf("enter any number : ");
scanf("%d",&n);
while(n>0)
{
r=r*10;
r=r+n%10;
n=n/10;
}
printf("reverse is %d",r);
getch();
}
