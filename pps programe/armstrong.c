#include<stdio.h>
void main()
{
int n,original,rem,sum=0;
printf("enter the number\n");
scanf("%d",&n);
original=n;
while(n!=0)
{
       rem=n%10;
       sum=sum+rem*rem*rem;
       n=n/10;
}
if(sum==original)
       printf("%d is an armstrong number",original);
else
       printf("%d is not an armstrong number",original);
}
