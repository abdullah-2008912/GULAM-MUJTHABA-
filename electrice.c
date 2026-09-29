#include <stdio.h>
int main() {
    float  amount , discountrate, discount,finalprice;
    printf(" enter purchase amount:");
    scanf("%f",&amount);
    if (amount<5000)
       discountrate = 5;
    else if (amount < 1000)
       discount = 15;
       else
       discount = 20;
       discount = amount * discountrate / 100 ;
       finalprice = amount - discount;
       printf("discount = Rs . %.2f\n", discount);
       printf("discount = Rs . %.2f\n", finalprice);
       return 0;

}
