#include<stdio.h>
void main()
{
int a[50],i,n;
printf("enter the limit:");
scanf("%d",&n);
printf("enter the elemnts:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("array elements are:");
for(i=0;i<n;i++)
{
if(a[i]%2==0)
printf("%d  ",a[i]);
}
}
