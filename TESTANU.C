#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,sum=0;
printf("enter the numbers:\n");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
printf("%d",i*i);
sum+=i*i;
}
printf("nos sum=%d\n",n,sum);
}