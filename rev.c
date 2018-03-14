#include <stdio.h>
int main(void) 
{
int s,remain,rev=0;
int res;
scanf("%d",&s);
while(s!=0)
{
remain=s%10;
rev=rev*10+remain;
s=s/10;
}
printf("\n%d",rev);
return 0;
}
