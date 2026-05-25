#include <stdio.h>
#include <stdlib.h>

int main()
{
    float number1 = 0;
    float number2 = 0;
    char symbol ;
    float result = 0;

    printf("Enter your first Number :");
    scanf("%f",&number1);

    printf("Enter your Second Number :");
    scanf("%f",&number2);

    printf("Choose operation (+, -, *, /):");
    scanf(" %c",&symbol);

    printf("\n");

    if (symbol == '+'){

        result = number1+ number2;
        printf("Your Final Result is :%.1f",result);
    }else if (symbol == '-'){
        result = number1 - number2;
        printf("Your Final Result is :%.1f",result);
    }else if (symbol == '*'){
        result = number1 * number2;
        printf("Your Final Result is :%.1f",result);
    }else if (symbol == '/'){
        result = number1 / number2;
        printf("Your Final Result is :%.1f",result);
    }else {
        printf("Invalid Input");
    }
    printf("\n");



    return 0;




}
