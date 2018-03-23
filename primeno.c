#include<stdio.h>
int main()
{
int s,x,flag=0;
printf("Enter integer");
scanf("%d",&s);
for(x=2;x<=s/2;++x)
{if(s%x==0)
{
flag=1;
break;
}
}
if(flag==0)
printf("%d is prime number",s);
else
printf("%d is not a prime number",s);
return 0;
}
