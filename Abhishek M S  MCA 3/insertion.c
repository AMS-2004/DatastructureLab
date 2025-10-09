#include<stdio.h>
void main()
{
int a[50],i,n,p,item;
printf("enter the limit:");
scanf("%d",&n);
printf("enter the elements:");

for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the postion:");
scanf("%d",&p);
printf("enter the elemnt to be inserted:");
scanf("%d",&item);

n=n+1;
for(i=n;i>=p-1;i--)
{
a[i+1]=a[i];
}
a[p-1]=item;
printf("new array");

for(i=0;i<n;i++)
{
printf("%d	" ,a[i]);
}
}

