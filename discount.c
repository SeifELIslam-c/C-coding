#include <stdio.h>
#include <cs50.h>
#include <string.h>

double FreeInputDiscount(void){
    double percent = get_double("Percentage will be from 5 to 100; please enter your percentage: ");
    if(percent<5 || percent>100){
    printf("Only from 5 to 100\n");
    return 0;
    }
    else{
    double price = get_double("Enter The Price: ");
    double amount = price * percent / 100;
    printf("Discounted amount: -%f\n", amount);
    printf("Price after discount: %f\n", price - amount);
    }
}

double ChoosableDiscount(void){
    double staticpercent = get_double("Choose the discount: 5, 15, 20, 25, 50, 75, 85, 95; ");
    if(staticpercent != 5 && staticpercent != 15 && staticpercent != 20 && staticpercent != 25 && staticpercent != 50 && staticpercent != 75 && staticpercent != 85 && staticpercent != 95){
    printf("Please choose only previous percentages!\n");
    }
    else{
    double price = get_double("Enter The Price: ");
    double amount = price * staticpercent / 100;
    printf("Discounted amount: -%f\n", amount);
    printf("Price after discount: %f\n", price - amount);
    }
}


int main(void){
    string answer = get_string("choose: FreeInputDiscount - ChoosableDiscount ; ");
    if(strcmp(answer, "FreeInputDiscount") == 0){
    FreeInputDiscount();
    }
    else if(strcmp(answer, "ChoosableDiscount") == 0){
    ChoosableDiscount();
    }
    else{
    return 0;
    }
}