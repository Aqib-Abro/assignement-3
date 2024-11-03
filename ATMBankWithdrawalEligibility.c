#include <stdio.h>
#include <conio.h>
int main() {
    float account_balance, withdrawal_amount;
    char special_permit;

    
    printf("Enter your account balance: ");
    scanf("%f", &account_balance);

    
    printf("Enter the amount you want to withdraw: ");
    scanf("%f", &withdrawal_amount);

    
    if (withdrawal_amount <= account_balance) {
        
        if (withdrawal_amount > 10000) {
           
            printf("The withdrawal amount is greater than 10,000.\n");
            printf("Do you have a special withdrawal permit? (Y/N): ");
            scanf(" %c", &special_permit); 

           
            if (special_permit == 'Y' || special_permit == 'y') {
                printf("Withdrawal approved. Please collect your cash.\n");
            } else {
                printf("Withdrawal denied. You need a special withdrawal permit for amounts over 10,000.\n");
            }
        } else {
           printf("Withdrawal approved. Please collect your cash.\n");
        }
    } else {
        printf("Withdrawal denied. Insufficient balance.\n");
    }

    getch();
}