#include <bits/stdc++.h>
using namespace std;

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
    
    switch (operation) {
        case '+':
            cout << add(num1, num2) << '\n';
            break;
        case '-':
            cout << getSubtraction(num1, num2) << '\n';
            break;
        case '*':
            cout << getMultiplication(num1, num2) << '\n';
            break;
        case '/':
            cout << divide(num1, num2) << '\n';
            break;
        default:
            cout << "Invalid operation\n";
    }
    return 0;
}