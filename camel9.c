#include <stdio.h>
int main() 
{
int s,z,x,y,cou=0,flag=1;
scanf("%d",&s);
scanf(" %d",&z);
if(s==2)
{
cou++;
}
for(x=s;x<=z;x++)
{
for(y=2;y<x;y++)
{
if(x%y==0)
{
flag=0;
break;
}
}
if(flag==1)
{
cou=cou+1;
}
}
printf("\n%d",cou);
return 0;
}
