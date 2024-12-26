#include<iostream>
using namespace std;
int main()
{
    double num1, num2;
    char operation;
    cout<<"Calculator Program"<<endl;
    cout<<"____________________"<<endl;
    cout<<"Enter First number:";
    cin>>num1;
    cout<<"Enter operation(+,-,*,/):";
    cin>>operation;
    cout<<"Enter Second Number:";
    cin>>num2;
    switch (operation)
    {
        case '+':
        cout<<"Result"<<num1 + num2<<endl;
        break;
        case '-':
        cout<<"Result:"<<num1 - num2<<endl;
        break;
        case '*':
        cout<<"Result:"<<num1 * num2<<endl;
        break;
        case '/':
        if (num2 !=0){
            cout<<"Result:"<<num1 / num2<<endl;
        }
        else {
            cout<<"Error: Division by zero!"<<endl;
        }
            break;
            default:
            cout<<"Error Invalid operation"<<endl;
            break;

    }
    return 0;
}