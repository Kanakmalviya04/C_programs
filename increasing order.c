#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a[15],x,n;
printf("enter any number\n");
scanf("%d",&n);
if(n<=15)
{
     printf("Enter numbers here :\n");
for(i=1;i<=n;i++)
{
    scanf("%d",&a[i]);
}
for(i=1;i<=n;i++)
{
for(j=i+1;j<=n;j++)
{
if(a[i]>a[j])
{
x=a[i];
a[i]=a[j];
a[j]=x;
}
}
}
printf("increasing order are :\n");
for(i=1;i<=n;i++)
{
printf("%d\n",a[i]);
}
}
else
{
    printf("entered number are above than 15");
}
getch();
}
