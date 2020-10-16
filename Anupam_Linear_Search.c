#include<stdio.h>
#include<stdlib.h>
void main()
{
int n,i,count=0,search,x[100],found=0;
printf("enter the number of element");
scanf("%d",&n);
printf("enter the values in list");
count++;
for(i=0;i<n;i++)
{
count++;
scanf("%d",&x[i]);
}
count++;
printf("enter the number to be searched \n");
scanf("%d",&search);
count++;
for(i=0;i<n;i++)
{
count++;
if(x[i]==search)
{
count++;
found=1;
count++;
break;
}
count++;
}
count++;
if(found==0)
{
count++;
printf("element is not found");
}
count++;
printf("\n count=%d",count);
count++;
}
