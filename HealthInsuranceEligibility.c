#include <stdio.h>
#include <conio.h>
int main() {
    int age;
    char seriousIllness;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age > 18) {
        if (age > 45) {
            printf("Have you had any serious illness? (Y/N): ");
            scanf(" %c", &seriousIllness); 
            
            if (seriousIllness == 'Y' || seriousIllness == 'y') {
                printf("You are not eligible for health insurance.\n");
            } else if (seriousIllness == 'N' || seriousIllness == 'n') {
                printf("You are eligible for health insurance.\n");
            } else {
                printf("Invalid input. Please enter 'Y' or 'N'.\n");
            }
        } else {
            printf("You are eligible for health insurance.\n");
        }
    } else {
        printf("You are not eligible for health insurance.\n");
    }

    getch();
}