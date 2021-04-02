//
// Created by nabil on 4/2/21.
//
#include <stdio.h>

void a1_ex1(){
    printf("C programming");
}

void a1_ex2(){
    int d;
    printf("Enter a integer ");
    scanf("%d",&d);
    printf("You entered %d",d);
}

void a1_ex3(){
    int a,b;
    printf("enter two integers ");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("Sum: %d",a+b);
}

void a1_ex4(){
    float a,b;
    printf("enter two floats ");
    scanf("%f",&a);
    scanf("%f",&b);
    printf("Product: %f",a*b);
}

void a1_ex5(){
    char a;
    printf("enter char ");
    scanf("%c",&a);
    printf("%d",a);
}

void a1_ex6(){
    float a,b,temp;
    printf("enter 2 numbers");
    scanf("%f %f",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("%f and %f ",a,b);
}

void a1_ex7(){
    float a,b,temp;
    printf("enter 2 numbers");
    scanf("%f %f",&a,&b);
    a+=b;
    b=a-b;
    a=a-b;
    printf("%f and %f ",a,b);
}