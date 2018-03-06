#include<stdio.h>
int main()
{
char d;
printf("enter the character");
scanf("%d",&d);
 if( (d>='A' && d<='Z') || (d>='a' && d<='z'))
 {
        printf("%d  an alphabet",d);
 }
    else
    {
        printf("%d is not an alphabet.",d);
        return 0;
        }}
