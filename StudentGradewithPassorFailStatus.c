#include <stdio.h>
#include <conio.h>

int main () {
    float english, maths, physics , average;

    printf("Enter the marks of english: ");
    scanf("%f", &english);
    printf("Enter the marks of maths: ");
    scanf("%f", &maths);
    printf("Enter the marks of physics: ");
    scanf("%f", &physics);

    average = (english + maths + physics) / 3;

    if (average<50) {
        printf("Average: %2f\n", average);
        printf("Result: Fail\n");
    } else {
        
        if (average > 75) {
        printf("Average: %2f\n", average);
        printf("Result: Grade A\n");
        } else {
         printf("Average: %2f\n", average);
        printf("Result: Grade B\n");  
        }
    }

    getch();
}