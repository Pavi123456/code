#include<stdio.h>
int main() 
{
int s,remain,sum=0,res;
scanf("%d",&s);
res=s;
while(s!=0)
{
remain=s%10;
sum=sum+(remain*remain*remain);
s=s/10;
}
if(res==sum)
printf("\nyes",res);
else
printf("\nno",res);
return 0;
}
