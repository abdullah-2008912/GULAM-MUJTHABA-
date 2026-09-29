#include<stdio.h>
int main()
{
int choice,units;
float bill;
printf(".electricity bill calculator\n");
printf("1.domestic\n");
printf("2.commercial\n");
printf("3.industrial\n");
printf("enter your choice:");
scanf("%d",&choice);
printf("enter units consumed:");
scanf("%d",&units);
if(units<0)
{
printf("invalid choice");
return 0;
}
{
case 1:
bill=units*2;
printf("domestic bill=RS.%.2f",bill);
break;
case 2:
bill=units*5;
printf("commercial bill=RS.%.2f",bill);
break;
case 3:
bill=units*7;
printf("industrial bill=RS.%.2f",bill);
break;
default:
printf("invalid choice idiot");
}
return 0;
}
