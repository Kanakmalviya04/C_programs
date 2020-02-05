#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
printf("enter any number\t");
scanf("%d",&n);
printf("Factors are :\n");
for(i=1;i<=n;i++)
{
if(n%i==0)
{
printf("%d\t",i);
}
}
getch();
}
