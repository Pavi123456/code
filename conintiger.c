#include <stdio.h>
#include<string.h>
int main(void) 
{
int n,j,res,a[20],t=0;
char s[10];
scanf("%s",s);
n=strlen(s);
for(j=0;j<n;j++)
{
if(s[j]=='I')
a[j]=1;
else if(s[j]=='V')
a[j]=5;
else if(s[j]=='X')
a[j]=10;
else if(s[j]=='L')
a[j]=50;
else if(s[j]=='C')
a[j]=100;
else if(s[j]=='D')
a[j]=500;
else
printf("\nINVALID");
}
for(j=0;j<n;j+=2)
{
if(a[j]<a[j+1])
{
res=a[j+1]-a[j];
}
else 
{
res=a[j]+a[j+1];
}
t=res+t;
}
printf("\n%d",t);
return 0;
}
