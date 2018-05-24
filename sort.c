#include<stdio.h>
int main()
{
int j,t,i;
int a,b[10];
scanf("%d",&a);
for(i=0;i<a;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<a;i++)
{
j=i+1;
if(b[i]<=b[j])
{ 
t=b[i];
}
else
{
t=b[j];
}
printf("%d\t",t);
}
return 0;
}
