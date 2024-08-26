#include <stdio.h>
#include <stdlib>
#include <string.h>

void handleaddition(double *result,double num);
void handlesubtraction(double *result,double num);
void handlemultiplication(double *result,double num);
void handledivision(double *result,double num);

int main() {
    char input[256]
    char *token;
    double num;
    double result;
    char op;
    
    printf("arithmetic symbol (+,-,*,/");
  if    fget(input,sizeof(input),stdin)== NULL)

    switch (input)
    {
        case '+':
            handleaddition(num1, num2);
            break;

        case '-':
            handlesubtraction(num1, num2);
            break;

        case '*':
            handlemultiplication(num1, num2);
            break;

        case '/':
            handledivision(num1, num2);
            break;

        default:
            printf("error.\n");
            break;
    }
    return 0;

    void handleaddition(double a, double b) {
        printf("result:%.2f\n,a + b");


    }
    void handlesubtraction(double a, double b) {
        printf("result:%.2f\n", a - b);

    }

    void handlemultiplication(double a, double b) {
        printf("result:%.2f\n", a * b);

    }
    void handledivision(double a, double b){
    if (b != 0) {
        printf("result:%.2f\n", a / b);

    }else {
        printf("error:division by zero.\n");
    }

}
}