#include <stdio.h>
int main(void) 
{
int array[10],j,s;
scanf("%d",&s);
for(j=0;j<s;j++)
{
scanf("%d",&array[j]);
printf("\n%d %d",array[j],j);
}
return 0;
}
