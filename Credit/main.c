/*
    Program has solutions for economic tools
    1) Calculate month payment.

*/

#include <stdio.h>
#include <math.h>

double calculate_month_payment_of_credit(double total_summ_of_credit , double years){

    double fixed_bet = 0.42;
    double months = years * 12;
    double month_payment = (fixed_bet/100)*total_summ_of_credit;
    double first_brackets_in_low_side = 1+(fixed_bet/100);
    double first_brackets_in_low_side_in_power = powf(first_brackets_in_low_side , -months);
    double lower_side = 1 - first_brackets_in_low_side_in_power;
    return month_payment/lower_side;

}

int main() {

    double total;
    double years;
    printf("Enter sum of your credit:");
    scanf("%lf" ,&total);
    printf("Enter how many years are you going to pay:");
    scanf("%lf" ,&years);
    double duty = calculate_month_payment_of_credit(total , years);
    printf(" SUMM OF CREDIT: %f" , total);
    printf(" PERIOD OF PAYMENT: %f" , years);
    printf(" MONTH PAYMENT: %f" , duty);
    system ("pause");
    return 0;
}
