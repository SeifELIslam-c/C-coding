#include <stdio.h>
#include <cs50.h>
#include <string.h>

double divide(double num1, double num2) {
    if (num2 == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0.0;
    }
    double result = num1 / num2;
    printf("Your result is: %f\n", result);
    return result;
}

double multiply(double num1, double num2) {
    double result = num1 * num2;
    printf("Your result is: %f\n", result);
    return result;
}

double add(double num1, double num2) {
    double result = num1 + num2;
    printf("Your result is: %f\n", result);
    return result;
}

double subtract(double num1, double num2) {
    double result = num1 - num2;
    printf("Your result is: %f\n", result);
    return result;
}

int intdivide(int n1, int n2) {
    if (n2 == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
    int result = n1 / n2;
    printf("Your result is: %i\n", result);
    return result;
}

int intmultiply(int n1, int n2) {
    int result = n1 * n2;
    printf("Your result is: %i\n", result);
    return result;
}

int intadd(int n1, int n2) {
    int result = n1 + n2;
    printf("Your result is: %i\n", result);
    return result;
}

int intsubtract(int n1, int n2) {
    int result = n1 - n2;
    printf("Your result is: %i\n", result);
    return result;
}

long lndivide(long nb1, long nb2) {
    if (nb2 == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
    long result = nb1 / nb2;
    printf("Your result is: %li\n", result);
    return result;
}

long lnmultiply(long nb1, long nb2) {
    long result = nb1 * nb2;
    printf("Your result is: %li\n", result);
    return result;
}

long lnadd(long nb1, long nb2) {
    long result = nb1 + nb2;
    printf("Your result is: %li\n", result);
    return result;
}

long lnsubtract(long nb1, long nb2) {
    long result = nb1 - nb2;
    printf("Your result is: %li\n", result);
    return result;
}

float fldivide(float ne1, float ne2) {
    if (ne2 == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0.0;
    }
    float result = ne1 / ne2;
    printf("Your result is: %f\n", result);
    return result;
}

float flmultiply(float ne1, float ne2) {
    float result = ne1 * ne2;
    printf("Your result is: %f\n", result);
    return result;
}

float fladd(float ne1, float ne2) {
    float result = ne1 + ne2;
    printf("Your result is: %f\n", result);
    return result;
}

float flsubtract(float ne1, float ne2) {
    float result = ne1 - ne2;
    printf("Your result is: %f\n", result);
    return result;
}

int main(void) {
    while (1) {
        string calc = get_string("Choose what type you need: double calc, int calc, long calc, float calc, or exit: ");
        if (strcmp(calc, "exit") == 0) {
            break;
        }

        if (strcmp(calc, "double calc") == 0) {
            double num1 = get_double("Enter the 1st number: ");
            double num2 = get_double("Enter the 2nd number: ");
            string answer = get_string("You wish to: / or * or + or - ? ");

            if (strcmp(answer, "*") == 0) {
                multiply(num1, num2);
            } else if (strcmp(answer, "+") == 0) {
                add(num1, num2);
            } else if (strcmp(answer, "-") == 0) {
                subtract(num1, num2);
            } else if (num2 == 0 && strcmp(answer, "/") == 0) {
                printf("Error, you can't do this in maths!!\n");
            } else if (strcmp(answer, "/") == 0){
                divide(num1, num2);
            } else {
                printf("please enter only the chars that i've included!!\n");
            }
        } else if (strcmp(calc, "int calc") == 0) {
            int n1 = get_int("Enter the 1st number: ");
            int n2 = get_int("Enter the 2nd number: ");
            string answer = get_string("You wish to: / or * or + or - ? ");

            if (strcmp(answer, "*") == 0) {
                intmultiply(n1, n2);
            } else if (strcmp(answer, "+") == 0) {
                intadd(n1, n2);
            } else if (strcmp(answer, "-") == 0) {
                intsubtract(n1, n2);
            } else if (n2 == 0 && strcmp(answer, "/") == 0) {
                printf("Error, you can't do this in maths!!\n");
            } else if (strcmp(answer, "/") == 0){
                intdivide(n1, n2);
            } else {
                printf("please enter only the chars that i've included!!\n");
            }
        } else if (strcmp(calc, "long calc") == 0) {
            long nb1 = get_long("Enter the 1st number: ");
            long nb2 = get_long("Enter the 2nd number: ");
            string answer = get_string("You wish to: / or * or + or - ? ");

            if (strcmp(answer, "*") == 0) {
                lnmultiply(nb1, nb2);
            } else if (strcmp(answer, "+") == 0) {
                lnadd(nb1, nb2);
            } else if (strcmp(answer, "-") == 0) {
                lnsubtract(nb1, nb2);
            } else if (nb2 == 0 && strcmp(answer, "/") == 0) {
                printf("Error, you can't do this in maths!!\n");
            } else if (strcmp(answer, "/") == 0){
                lndivide(nb1, nb2);
            } else {
                printf("please enter only the chars that i've included!!\n");
            }
        } else if (strcmp(calc, "float calc") == 0) {
            float ne1 = get_float("Enter the 1st number: ");
            float ne2 = get_float("Enter the 2nd number: ");
            string answer = get_string("You wish to: / or * or + or - ? ");

            if (strcmp(answer, "*") == 0) {
                flmultiply(ne1, ne2);
            } else if (strcmp(answer, "+") == 0) {
                fladd(ne1, ne2);
            } else if (strcmp(answer, "-") == 0) {
                flsubtract(ne1, ne2);
            } else if (ne2 == 0 && strcmp(answer, "/") == 0) {
                printf("Error, you can't do this in maths!!\n");
            } else if (strcmp(answer, "/") == 0){
                fldivide(ne1, ne2);
            } else {
                printf("please enter only the chars that i've included!!\n");
            }
        }
    }
    return 0;
}
