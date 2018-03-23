#include<stdio.h>
int main() 
{
int s;
printf("\n the odd numbers are:");
for(s=10;s<=20;s++)
{
if(s%2!=0)
printf("%d",s);
printf("\t");
}
return 0;
}
