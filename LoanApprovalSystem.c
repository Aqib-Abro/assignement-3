#include <stdio.h>
#include <string.h>

int main() {
    float monthlyIncome;
    char hasExistingLoan[4]; 
    int overduePayments;

    printf("Enter your monthly income: ");
    scanf("%f", &monthlyIncome);

    if (monthlyIncome > 30000) {
        printf("Do you have an existing loan? (Yes/No): ");
        scanf("%s", hasExistingLoan);

        if (strcmp(hasExistingLoan, "Yes") == 0) {
            printf("Do you have any overdue payments? (1 for Yes, 0 for No): ");
            scanf("%d", &overduePayments);

            if (overduePayments == 0) {
                printf("Congratulations! You are eligible for the loan.\n");
            } else {
                printf("You are not eligible for the loan due to overdue payments.\n");
            }
        } else if (strcmp(hasExistingLoan, "No") == 0) {
            printf("Congratulations! You are eligible for the loan.\n");
        } else {
            printf("Invalid input for existing loan status. Please enter 'Yes' or 'No'.\n");
        }
    } else {
        printf("You are not eligible for the loan due to insufficient income.\n");
    }
    printf("Press Enter to exit...\n");
    getchar();
    getchar();

    return 0;
}