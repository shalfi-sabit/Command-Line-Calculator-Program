#include <bits/stdc++.h>
using namespace std;

bool isEven(long long num){
    if(num%2) return false;
    else return true;
}

long long getSubtraction(long long numberOne, long long numberTwo) {
    return numberOne - numberTwo;
}

long long divide (long long num1, long long num2) {
  return num1 / num2;
}

long long add(long long num1, long long num2){
    return num1 + num2;
}

long long getMultiplication(long long number1, long long number2){
    return number1 * number2;
}

bool isNegative(long long number){
    if(number<0){
        return true;
    }else{
        return false;
    }
}

bool isPositive(long long number){
    if(number > 0) return true;
    return false;
}

string checkNegativeOrPositive (long long num) {
    if (isPositive(num)) {
        return "Positive";
    } 
    if (isNegative(num)) {
        return "Negative";
    }
    return "Zero";
}

string checkEvenAndOdd (long long num) {
    return isEven(num) ? "Even" : "Odd";
}

void formatPrint (long long num1, long long num2, char operation) {
    long long result = 0;
    switch (operation) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = getSubtraction(num1, num2);
            break;
        case '*':
            result = getMultiplication(num1, num2);
            break;
        case '/':
            result = divide(num1, num2);
            break;
    }
    
    cout << num1 << " " << operation << " " << num2 << " = " << result << '\n';
    
    cout << "(" << checkEvenAndOdd(num1) << ";" << checkNegativeOrPositive(num2) << ";) " << operation << " ";
    cout << "(" << checkEvenAndOdd(num2) << ";" << checkNegativeOrPositive(num2) << ";) = ";
    cout << "(" << checkEvenAndOdd(result) << ";" << checkNegativeOrPositive(result) << ";)\n";
}

int main() {
    cout << "### Command line Calculator Program ###\n\n";
    
    cout << "Enter num1: ";
    long long num1;
    cin >> num1;
    
    cout << "Enter num2: ";
    long long num2;
    cin >> num2;
    
    cout << "Choose operation: + | - | * | /\n";
    char operation;
    cin >> operation;
    
    formatPrint(num1, num2, operation);
    return 0;
}