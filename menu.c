#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void Somme(float num1, float num2) {
    printf("***************MENU****************\n");
    printf("---) option 1 has been selected!!\n");
    printf("Please enter num1: ");
    scanf("%f", &num1);
    printf("Please enter num2: ");
    scanf("%f", &num2);
    printf("your sum: %.2f\n", num1 + num2);
}

void Product(float num1, float num2) {
    printf("***************MENU****************\n");
    printf("---) option 2 has been selected!!\n");
    sleep(1);
    printf("Please enter num1: ");
    scanf("%f", &num1);
    printf("Please enter num2: ");
    scanf("%f", &num2);
    printf("your product: %.2f\n", num1 * num2);
}

void Average(float num1, float num2) {
    printf("***************MENU****************\n");
    printf("---) option 3 has been selected!!\n");
    sleep(1);
    printf("Please enter num1: ");
    scanf("%f", &num1);
    printf("Please enter num2: ");
    scanf("%f", &num2);
    printf("your average: %.2f\n", (num1 + num2) / 2);
}

void Minimum(float num1, float num2) {
    printf("***************MENU****************\n");
    printf("---) option 4 has been selected!!\n");
    sleep(1);
    printf("Please enter num1: ");
    scanf("%f", &num1);
    printf("Please enter num2: ");
    scanf("%f", &num2);
    if (num1 < num2) {
        printf("the minimum number is: %.2f\n", num1);
    } else {
        printf("the minimum number is: %.2f\n", num2);
    }
}

void Maximum(float num1, float num2) {
    printf("***************MENU****************\n");
    printf("---) option 5 has been selected!!\n");
    sleep(1);
    printf("Please enter num1: ");
    scanf("%f", &num1 );
    printf("Please enter num2: ");
    scanf("%f", &num2);
    if (num1 > num2) {
        printf("the maximum number is: %.2f\n", num1);
    } else {
        printf("the maximum number is: %.2f\n", num2);
    }
}

int main() {
    int user_entrance;
    float num1 = 0;
    float num2 = 0;
    while (1) {
        sleep(2); system("clear");
        printf("***************MENU****************\n");
        printf("    1-------->Somme----------\n");
        printf("    2-------->Product--------\n");
        printf("    3-------->Average--------\n");
        printf("    4-------->Minimum--------\n");
        printf("    5-------->Maximum--------\n");
        printf("  ------------------------------\n");

        printf("Please enter your choice!: ");
        scanf("%i", &user_entrance);
        if (user_entrance == 1) {
            Somme(num1, num2);
        } else if (user_entrance == 2) {
            Product(num1, num2);
        } else if (user_entrance == 3) {
            Average(num1, num2);
        } else if (user_entrance == 4) {
            Minimum(num1, num2);
        } else if (user_entrance == 5) {
            Maximum(num1, num2);
        } else {
            printf("only between 1 and 5!!\n"); sleep(1); system("clear");
        } getchar();
    }
    return 0;
}
