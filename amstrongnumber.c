#include<stdio.h>
int main() 
{
int s,remain,sum=0,res,e;
scanf("%d",&s);
scanf("%d",&e);
res=s;
for(int e; s<=e;s++)
while(s!=0)
remain=s%10;
sum=sum+(remain*remain*remain);
s=s/10;
{
if(res==sum)
printf("%d",&s);
return 0;
}
}
