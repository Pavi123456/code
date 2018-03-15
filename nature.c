#include<stdio.h>
int main()
{
int s,j,sum=0;
printf("Enter the number:");
scanf("%d",&s);
printf("%d",s);
for(j=1;j<=s;++j)
{
sum+=j;
}
printf("ans=%d",sum);
return 0;
}
