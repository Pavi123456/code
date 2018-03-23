#include<stdio.h>
int main() 
{
int x,lower,higher,y;
printf("\n enter the start range:");
scanf("%d",&lower);
printf("\n enter the end range");
scanf("%d",&higher);
printf("\nthe prime numbers between %d and %d are:",lower,higher);
for(x=lower;x<=higher;x++)
{
for(y=2;y<=x;y++)
{
if(x%y==0)
break;
}
if(x==y)
printf("\n%d",y);
}
return 0;
}
