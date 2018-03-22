#include<stdio.h>
int main(void) 
{
int s,p,res=1;
printf("\nenter number");
scanf("%d",&s);
printf("\nenter power");
scanf("%d",&p);
while(p!=0)
{
res*=s;
--p;
}
printf("\n%d",res);
return 0;
}
 
