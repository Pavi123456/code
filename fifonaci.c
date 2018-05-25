#include<stdio.h>
int main(void) 
{
int h=1,j=1,i,s,c;
scanf("%d",&s);
printf("%d",h);
printf("\t%d",j);
for(i=1;i<=s-2;i++)
{
c=h+j;
printf("\t%d",c);
h=j;
j=c;
}
return 0;
}
