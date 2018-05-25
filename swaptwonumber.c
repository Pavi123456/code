#include<stdio.h>
int main()
{
int s,y;
scanf("%d%d",&s,&y);
int temp=s;
s=y;
y=temp;
printf("%d\t%d",s,y);
return 0;
}
