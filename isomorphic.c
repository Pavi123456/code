#include<stdio.h>
#include<string.h>
#include<conio.h>
int main() 
{
char str[50],strs[50];
int s,j,flag=1,x,y;
scanf("%s%s",str,strs);
int a1=strlen(str);
int a2=strlen(strs);
if(a1==a2)
{
for(s=0;s<a1;s++)
{
for(j=s+1;j<a2;j++)
{
x=str[s]-str[j];
y=strs[s]-strs[j];
if(x==y)
{
flag=0;
}
else
{
flag=1;
break;
}
}
}
}
else
{
printf("\nno");
}
if(flag==1)
{
printf("\nno");
}
else
{
printf("\nyes");
}
return 0;
}
