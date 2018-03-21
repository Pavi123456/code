#include<stdio.h>
#include<string.h>
int main()
{
char str[10];
int k,tem,s;
printf("enter string");
scanf("&s",&str)
n=strlen(str);
if(s%2==0)
{
for(k=0;k<s;k+=2)
{
tem=str[k];
string[k]=str[k+1];
string[k+1]=tem;}
puts(str);
}
else
{
for(k=0;k<n-1;k+=2)
{
tem=str[k];
str[k]=str[k+1];
str[k+1]=tem;
}
puts(str);
}
return 0;
}
