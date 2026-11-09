// 1. Electricity Bill Calculator
// Problem: Develop a C program to calculate an electricity bill based on the units consumed by a customer.


#include <stdio.h>

int main() {
    int units;
    float bill;

    printf("Enter electricity units: ");
    scanf("%d", &units);

    if (units < 0) {
        printf("Invalid units");
    }
    else if (units <= 100) {
        bill = units * 2;
        printf("Electricity Bill: Rs. %.2f", bill);
    }
    else if (units <= 200) {
        bill = (100 * 2) + (units - 100) * 3;
        printf("Electricity Bill: Rs. %.2f", bill);
    }
    else if (units <= 300) {
        bill = 200 + 300 + (units - 200) * 5;
        printf("Electricity Bill: Rs. %.2f", bill);
    }
    else {
        bill = 200 + 300 + 500 + (units - 300) * 7;
        printf("Electricity Bill: Rs. %.2f", bill);
    }

    return 0;
}
// 2. ATM Banking System
// Problem: Develop an ATM system that allows customers to check balance, deposit money and withdraw money


