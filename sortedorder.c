#include<stdio.h>
#include<stdlib.h>
int main()
{
int s,o[100],p[100],c=0,j,i,key,x;
scanf("%d",&s);
for(i=0;i<s;i++)
{
scanf("%d",&o[i]);
}
x=0;
for(i=0;i<s;i++)
{
if(i==o[i])
{
p[x]=o[i];
x++;
c=1;
}
}
if(c==0)
printf("\n'-1\n'");
else
{
for(i=0;i<x;i++)
{
printf("c",&c);
printf("%d ",p[i]);
}
}
return 0;
}
