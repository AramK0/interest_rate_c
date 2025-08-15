#include <stdio.h>



int main(void){

    
    float loan = 0;
    float interest_rate = 0;
    float monthly_payment = 0;
    float first_payment = 0;
    float second_payment = 0;
    float third_payment = 0;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);

    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    float monthly_interest_rate = (interest_rate / 100) / 12;

    first_payment = (loan - monthly_payment) + (loan * monthly_interest_rate);
    loan = first_payment;
    second_payment = (loan - monthly_payment) + (loan * monthly_interest_rate);
    loan = second_payment;
    third_payment = (loan - monthly_payment) + (loan * monthly_interest_rate);
    loan = third_payment;


    printf("Balance remaining after first payment: %.2f\n", first_payment);
    printf("Balance remaining after second payment: %.2f\n", second_payment);
    printf("Balance remaining after third payment: %.2f\n", third_payment);








    return 0;
}