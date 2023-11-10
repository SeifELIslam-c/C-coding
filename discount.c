#include <stdio.h>
#include <cs50.h>
#include <string.h>

void FreeInputDiscount(double percent){
    if(percent<5 || percent>100){
    printf("Only from 5 to 100\n");
    }
    else{
    double price = get_double("Enter The Price: ");
    double amount = price * percent / 100;
    printf("Discounted amount: -%f\n", amount);
    printf("Price after discount: %f\n", price - amount);
    }
}

void ChoosableDiscount(double staticpercent){
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
        double staticpercent = get_double("Choose the discount: 5, 15, 20, 25, 50, 75, 85, 95; ");
        FreeInputDiscount(staticpercent);
    } else if(strcmp(answer, "ChoosableDiscount") == 0){
        double percent = get_double("Percentage will be from 5 to 100; please enter your percentage: ");
        ChoosableDiscount(percent);
    } else{
    return 0;
    }
}
