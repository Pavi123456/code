#include<stdio.h>
int main()
{
unsigned int s,k,j,max=999,temp;
int a[s];
scanf("%d",&s);
for(k=0;k<s;i++)
{
scanf("%u",&a[k]);
if(a[k]<0)
{
return 0;
}
}
for(k=0;k<s;k++)
{
max=k;
for(j=k;j<s;j++)
{
if(a[j]>a[max])
{
max=j;
}
}
temp=a[k];
a[k]=a[max];
a[max]=	temp;
}
if(a[0]!=0)
{
for(k=0;k<n;k++)
printf("%u",a[k]);
}
else
printf("0");
return 0;	
}
