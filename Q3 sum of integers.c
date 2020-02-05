#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i,z=0;
printf("enter two numbers\n");
scanf("%d%d",&a,&b);
for(i=a;i<=b;i++)
{
z=z+i;
}
printf("sum is : %d  ",z);
getch();
}
