#include<stdio.h>
int main()
{
long long num;
int value=0;
printf("Enter an number");
scanf("%lld",&num);
while(num!=0)
{
value++;
num/=10;
}
printf("Totaldigits:%d",value);
return 0;
}
