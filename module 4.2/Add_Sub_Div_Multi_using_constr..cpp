#include <iostream>
using namespace std;

int main()
{
    int num1, num2, add, subtract, multiply;
    float divide;
    
    cout << "Please enter two number: ";
    cin >> num1;
    cin >> num2;
    
    add        = num1 + num2;
    subtract = num1 - num2;
    multiply = num1 * num2;
    divide     = num1 / (float)num2;   //typecasting
    
    cout << endl <<"Sum = " << add;
    cout << endl <<"Difference = " << subtract;
    cout << endl <<"Multiplication = " << multiply;
    cout << endl <<"Division = " << divide; 
    
    return 0;
}