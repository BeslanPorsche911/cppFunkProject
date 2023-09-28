
#include <iostream>
using namespace std;

int main()
{
    
    cout << "input two num: ";
    float num1,num2;
    char op;
    cin >> num1>>num2;
    cout << "input op: ";
    cin >> op;
    switch (op) {
    case '+':
        cout << num1 << '+' << num2 << '=' << num1 + num2;
        break;
    case '-':
        cout << num1 <<'-' << num2 << '=' << num1 - num2;
        break;
    case '*':
        cout << num1 <<'*' << num2 << "=" << num1 * num2;
        break;
    case '/':
        cout << num1 << '/' << num2 << '=' << num1 / num2;
        break;
    default:
        cout << "lie";
       
    
    }
    
 
    
}


