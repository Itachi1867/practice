#include<iostream>
using namespace std;

int main()
{
    float num1;
    float num2;
    char opp;
    
    cout << "Enter first number: " << endl;
    cin >> num1;
    cout << "Enter an operator: " << endl;
    cin >> opp;
    cout << "Enter second number: " << endl;
    cin >> num2;

    if(opp == '+')
    cout << num1 + num2;
    else if(opp == '-')
    cout << num1 - num2;
    else if(opp == '*')
    cout << num1 * num2;
    else if(opp == '/')
    cout << num1 / num2;
  
  return 0;
}