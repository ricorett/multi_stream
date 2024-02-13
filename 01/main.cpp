#include "source.h"

int main(){
    int num1 = 0, num2 = 0, operation = 0, sum = 0;
    std::cout << "Введите первое число: ";
    std::cin >> num1;
    std::cout << "Введите второе число: ";
    std::cin >> num2;
    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> operation;
        switch(operation){
            case 1: 
                  std::cout << num1 << " плюс " << num2 << " = " << plus(num1, num2);  
                  break;
            case 2: 
                 std::cout << num1 << " минус " << num2 << " = " <<  sub(num1, num2);  break;
            case 3:
                 std::cout << num1 << " умножить на " << num2 << " = " <<  mult(num1, num2); break;
            case 4: 
                  std::cout << num1 << " разделить на " << num2 << " = " << divid(num1, num2);  break;
            case 5: 
                  std::cout << num1 << " в степени " << num2 << " = " << power(num1, num2); break;
        }
    
    return 0;
}
