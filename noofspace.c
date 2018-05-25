#include<stdio.h>
int main(void) 
{
char str[50];
int i,countno=0;
scanf("%[^\n]s",str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]==' ')
{
countno=countno+1;
}
}
printf("%d",countno);
return 0;
}
