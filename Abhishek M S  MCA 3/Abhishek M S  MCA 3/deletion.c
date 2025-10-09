#include<stdio.h>
void main()
{
  int a[50],i,n,p;
  printf("enter the limit");
  scanf("%d",&n);
  printf("enter the elements");
  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  }
  printf("enter the position ");
  scanf("%d",&p);
  for(i=p-1;i<n;i++)
  {
    a[i]=a[i+1];
    }
printf("\narray after deletion:");
for(i=0;i<n-1;i++)
{
printf("%d  ",a[i]);
}
}




