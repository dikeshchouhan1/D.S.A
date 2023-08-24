#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char opp;
    cin >> a >> b >> opp;
    switch (opp)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '%':
        cout << a % b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;
    case '*':
        cout << a * b << endl;
    default:
        cout << "invaild opp" << endl;

        break;
    }

    return 0;
}