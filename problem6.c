#include <stdio.h>

int is_perfect_square(int number);
int reverse_digits(int number);
int sum_digits(int number);

int main(){
    int number, reversed_number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if(is_perfect_square(number)){
        printf("%d is a perfect square\n", number);
    }
    else{
        printf("%d is not a perfect square\n", number);
    }

    reversed_number = reverse_digits(number);
    printf("the number after reverse it is %d\n", reversed_number);

    printf("the sum of all digits is %d\n", sum_digits(number));

    return 0;
}


int is_perfect_square(int number){
    int i = 0;
    while(i * i <= number){
        if(i * i == number){
            return 1;  // 1 represents true
        }
        i++;
    }

    return 0; // 0 represents false
}

int reverse_digits(int number){
    int reversed = 0;
    while(number != 0){
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }
    return reversed;
}

int sum_digits(int number){
    int sum = 0;
    while(number != 0){
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }   
    return sum;
}