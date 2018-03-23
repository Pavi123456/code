#include<stdio.h>
int main() 
{
char str[100];
scanf("%s",str);
int s,x,y;
x=str[0];
if(x>91)
{
x=y-32;
str[0]=x;
}
for(s=1;str[s]!='\0';s++)
{
if(str[s]==' ')
{
y=str[s+1];
if(y>91)
{
x=y-32;
str[s+1]=x;
}	
}
}
printf("%s",str);
return 0;
}
