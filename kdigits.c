include<stdio.h>
#include<conio.h>
void main()
{
int a[10000],i,j,s,o,h;
scanf("%d",&s);
scanf("%d",&h);
for(i=0;i<s;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<s;i++)
{
for(j=i+1;j<s;j++)
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=o;
}
}
for(i=0;i<h-1;i++)
printf("%d ",a[i]);
getch();
}
