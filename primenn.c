#include<stdio.h>
int main()
{
int no,i,f=0;
scanf("%d",&no);
for(i=2;i<=no/2;i++)
{
if(no%i==0)
{
f=1;
break;
}
}
if(f==0)
{
printf("%d is a prime num",no);
}
else
{
printf("%d not a prime number num",no);
}
return 0;
}
