// 2. ATM Banking System
// Problem: Develop an ATM system that allows customers to check balance, deposit money and withdraw money


#include <stdio.h>

int main() {
    int choice;
    float balance = 10000, amount;

    do {
        printf("\n\n===== ATM SYSTEM =====");
        printf("\n1. Check Balance");
        printf("\n2. Deposit Money");
        printf("\n3. Withdraw Money");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Balance: Rs. %.2f", balance);
                break;

            case 2:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);

                if (amount > 0) {
                    balance += amount;
                    printf("Deposit Successful");
                } else {
                    printf("Invalid amount");
                }
                break;

            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);

                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("Withdrawal Successful");
                } else {
                    printf("Invalid amount or insufficient balance");
                }
                break;

            case 4:
                printf("Thank you!");
                break;

            default:
                printf("Invalid choice");
        }

    } while(choice != 4);

    return 0;
}

