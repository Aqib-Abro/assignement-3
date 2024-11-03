#include <stdio.h>
#include <conio.h>

int main () {

    int age;
    float weight;

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your weight: ");
    scanf("%f", &weight);
     
     if (age >= 18 && age <= 65){
        printf("You are  eligible to donate the blood ");
     } else {
        printf("You are  eligible to donate the blood due to your age.\n ");
     }
    if (weight>= 50)  {
        printf("You are eligible to donate the blood ");
         
     } else {
        printf("You are not eligible to donate the blood due to you weight.\n");
     }
     getch();
}