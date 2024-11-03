#include <stdio.h>
#include <conio.h>

int main () {
    float mathscore, sciencescore;

    printf("Enter the match score (out of 100):");
    scanf("%f", &mathscore);

    printf("Enter the science score (out of 100):");
    scanf("%f",&sciencescore);

    if (mathscore >50 && sciencescore >50) {
        printf("The student is eligible for admission.\n");
    } else {
        printf("The student is not eligible for the admission.\n ");
    }
    
    if (mathscore >=80 && sciencescore>=80) {
        printf("The student is qualifies for the scholarship.\n");
    } else {
        printf("The student is not qualify for the scholarship.\n");
    }
    getch ();
 }