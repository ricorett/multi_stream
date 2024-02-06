#include "main.h"


int plus(int &num1, int &num2){
    return num1 + num2;
}

int sub(int &num1, int &num2){
    return num1 - num2;
}

int mult(int &num1, int &num2){
    return num1 * num2;
}

double divid(int &num1, int &num2){
    return (double)num1 / num2;
}

int power(int &num1, int &num2){
    return pow(num1,num2);
}