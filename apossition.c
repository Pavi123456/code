#include<stdio.h>
#include<string.h>
int main()
{
char s[10],o[10];
int cos=0,x,x1,i,j;
scanf("%s %s",s,o);
x=strlen(s);
x1=strlen(o);
for(i=0,j=0;i<x,j<x1;i++,j++)
{
if(s[i]!=o[j])
{
if(o[j]>s[i])
cos=cos+(o[j]-s[i]);  
else
cos=cos+(s[i]-o[j]);
}
else if(s[i]==o[j])
{
continue;
}
}
printf("%d",cos);
return 0;
}
