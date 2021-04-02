//
// Created by nabil on 4/2/21.
//
#include <stdio.h>

void a2_ex1() {
    int number;
    printf("enter number ");
    scanf("%d", &number);
    if (!number % 2)
        printf("%d is even", number);
    else
        printf("%d is odd", number);


}

void a2_ex2() {
    char c;
    printf("enter char ");
    scanf("%c", &c);

    if (c == 'a' || c == 'i' || c == 'o' || c == 'e')
        printf("%c is vowel ", c);
    else
        printf("%c is consonant", c);


}


void a2_ex3() {
    float first, sec, third, biggest;

    printf("enter 3 numbers : ");
    scanf("%f", &first);
    scanf("%f", &sec);
    scanf("%f", &third);


    biggest = first > sec ? first : sec;
    biggest = biggest > third ? biggest : third;


    printf("the biggest is %f", biggest);
}


void a2_ex4() {

    float number;
    printf("enter number :");
    scanf("%f", &number);

    if (number > 0)
        printf("%f is positive ", number);
    else if (number < 0)
        printf("%f is negative ", number);
    else
        printf("you entered zero");


}

void a2_ex5() {
    char c;
    printf("enter char : ");
    scanf("%c", &c);

    if (c >= 65 && c <= 122)
        printf("%c is alphabet", c);
    else
        printf("%c is not alphabet", c);


}

void a2_ex6() {
    int number;
    printf("enter number : ");
    scanf("%d", &number);
    printf("%d", number * (number + 1) / 2);

}

int factorial(int);

void a2_ex7() {
    int number;
    printf("enter number :");
    scanf("%d", &number);
    if (number >= 0)
        printf("%d", factorial(number));
    else
        printf("error !! factorial for positive numbers only ");


}

int factorial(int number) {
    if (number == 0)
        return 1;
    return number * factorial(number - 1);

}


void a2_ex8() {
    float a, b, result;
    char operator;
    printf("enter operator :");
    scanf("%c", &operator);

    printf("enter 2 numbers : \n");
    scanf("%f", &a);
    scanf("%f", &b);


    switch (operator) {

        case '+':
            result = a + b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        case '-':
            result = a - b;
            break;
        default:
            printf("enter valid operator ! ");
            break;

    }


    printf("result is %f", result);

}