#include <stdio.h>

double calc_interest(double balance);
double calc_total_amount(double balance, double interest);
double calc_min_payment(double total_amount);

int main(){
    int option;
    do {
        double balance, interest, total_amount, min_payment;
        printf("\nEnter the account balance: ");
        scanf("%lf", &balance);
        if(balance < 0){
            printf("Invalid balance!\n");
            break;
        }
        interest = calc_interest(balance);
        total_amount = calc_total_amount(balance, interest);
        min_payment = calc_min_payment(total_amount);

        printf("interest due: %.2lf$\n", interest);
        printf("total amount due: %.2lf$\n", total_amount);
        printf("minimum payment: %.2lf$\n", min_payment);

        printf("\n[1] for Repeat\n");
        printf("[0] for Exit\n");
        printf("Choose one of these options: ");
        scanf("%d", &option);
        
    } while(option != 0);
    return 0;   
}


double calc_interest(double balance){
    double interest;
    if(balance <= 1000){
        interest = balance * 0.015;
    }
    else{
        interest = 1000 * 0.015 + (balance - 1000) * 0.01;
    }
    
    return interest;
}


double calc_total_amount(double balance, double interest){
    return balance + interest;
}


double calc_min_payment(double total_amount){
    double min_payment;
    if(total_amount <= 10){
        min_payment = total_amount;
    }

    else{
        double ten_percent_total_amount = total_amount * 0.1;
        min_payment = ten_percent_total_amount >= 10 ? ten_percent_total_amount : 10;
    }

    return min_payment;
}
