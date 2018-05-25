#include <stdio.h>
int main() 
{
char string[50];
int j,count=0;
scanf("%[^\n]s",string);
for(j=0;string[j]!='\0';j++)
{
if(!((string[j]>='0' && string[j]<='9')||(string[j]>='a' && string[j]<='z')))
{
count=count+1;
}
}
printf("%d",count);
return 0;
}
