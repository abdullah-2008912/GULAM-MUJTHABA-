#include <stdio.h>
void  main()
{
       int a,b,c;
       printf("enter 3 numbers (one by one)      :");
       scanf("%d%d%d",&a,&b,&c);
       if(a>b && a>c)
              printf("%d is a big no",a);
       else if(b>a && b>c)
              printf("%d is a big no",b);
       else
              printf("%d is a big no",c);

}
