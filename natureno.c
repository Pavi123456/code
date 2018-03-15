#include<stdio.h>
int main()
{
int s,j,sum=0;
printf("Enter a positive integer:");
scanf("%d",&s);
for(j=1;j<=s;++j)
{
sum+=j;
}
printf("Sum=%d",sum);
return 0;
}
