#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    //define variables
    string operation;
    double number1, number2;

    cout << "Enter operation(+ - * /): ";
    cin >> operation;

    cout << "Enter first number: ";
    cin >> number1;

    cout << "Enter second number: ";
    cin >> number2;

    //checking entered operation
    if(operation == "+"){
        cout << "ans = " << number1 + number2;
    }

    else if(operation == "-"){
        cout << "ans = " << number1 - number2;
    }

    else if(operation == "*"){
        cout << "ans = " << number1 * number2;
    }

    else if(operation == "/"){
        if(number2 == 0){
            cout << "Can't divided by zero";
        }
        else{
            cout << "ans = " << number1 / number2;
        }
    }

    else{
        cout << "not a recognized operation!";
    }

    return 0;
}