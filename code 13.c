
  int year;
  printf("Enter a year");
  scanf("%d", &year);
  if (year %100==0)
  if (year %400==0)
{
 printf("display leap year");
}
else{
       printf("display if not a leap year");
}
 else if(year%4==0)
{
       printf("display leap year");
}
 else{
       printf("display if not a leap year");
 }
 return 0;
}
