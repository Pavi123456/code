#include<stdio.h>
#include<conio.h>
void main()
{
char string1[100],string2[100];
clrscr();
printf("enter the string");
gets(string1);
strcpy(string2,string1);
strrev(string2);
printf("\n entered string:%s",string1);
printf("\n reversed string:%s",string2);
getch();
}
