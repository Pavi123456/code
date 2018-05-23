#include <stdio.h>
int max(int array[50],int s);
int main(void) 
{
int array[50];
int j,res,s;
scanf("%d",&s);
for(j=0;j<s;j++)
{
scanf("%d",&array[j]);
printf("%d",array[j]);
}
res=max(array,s);
printf("\n%d",res);
return 0;
}
int max(int array[50],int s)
{
int j,ml=array[0];
for(j=1;j<s;j++)
{
scanf("%d",&array[j]);
if(array[j]>ml)
{
ml=array[j];
}
}
return (ml);
}	
