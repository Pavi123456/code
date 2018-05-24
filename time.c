#include<stdio.h>
int main(void) 
{
int minutes,hours,mins,seconts=00;
scanf("%d",&minutes);
hours=minutes/60;
mins=minutes%60;
if(mins>60)
{
seconts=mins%60;
mins=mins-seconts;
}
printf("%d\t%d\t%d\t",hours,mins,seconts);
return 0;
}
