#include<stdio.h>
int main()
{
int j,t,t1,i;
int a,b[10];
scanf("%d",&a);
for(i=0;i<a;i++)
{
scanf("%d",&b[i]);
}
t1=b[0];
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
if(t1>=t)
{
t1=t;
}
else
{
t1=t1;
}
}
printf("%d",t1);
return 0;
}
