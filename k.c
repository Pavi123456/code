#include <stdio.h>
int main() 
{
int s,j,i,sum[100];
printf("enter number:");
scanf("%d",&sum[9]);
for(j=0;j<s;j++)
{
for(i=0;i<s;i++)
{
sum[i]=sum[i]+i;
}
sum[j]=sum[j]+j;
}
printf("%d",sum);
return 0;
}
