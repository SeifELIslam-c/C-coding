#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c, delta, solution;
    while(1){

    printf("Enter the value of a: ");
    scanf("%lf",&a);
    printf("Enter the value of b: ");
    scanf("%lf",&b);
    printf("Enter the value of c: ");
    scanf("%lf",&c);

    delta = pow(b, 2) - (4 * a * c);
    if(delta < 0){
        printf("there are no solutions in R\n");
    } else if(a == 0 && b == 0){
        printf("In this case, the equation is reduced to a simple linear equation: c = 0\n");
    } else if(a == 0 && c == 0){
        printf("then b = 0 :) !!\n");
    } else if (a == 0){
        printf("there are no quadratic formula solutions. Instead, you solve for x directly as: -c / b (because a = 0) so the solution is: %.2lf\n", solution = -c / b);
    } else if(b == 0){
        printf("you entered b = 0 which means still a valid quadratic equation, and you can solve it using the quadratic formula!\n");
        printf("x1 = %.2lf\n", solution = (-b) + (sqrt(delta)) / 2*a);
        printf("x2 = %.2lf\n", solution = (-b) - (sqrt(delta) / 2*a));
    } else if(delta > 0){
        printf("x1 = %.2lf\n", solution = (-b) + (sqrt(delta)) / 2*a);
        printf("x2 = %.2lf\n", solution = (-b) - (sqrt(delta) / 2*a));
    } else if((delta == 0)){
        printf("there are only one solution which is: x = %.2lf\n", solution = (-b) / 2*a);
    }

        }

}