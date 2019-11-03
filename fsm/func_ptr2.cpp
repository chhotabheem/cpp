#include <iostream>
#include <string>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int substract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    return a / b;
}

int main()
{
    int a = 8, b = 2;
    int (*perform_op)(int, int);
    while (1)
    {
        string s;
        cout << "enter operation." << endl;
        cin >> s;
        if (s == "add")
        {
            perform_op = add;
        }
        else if (s == "sub")
        {
            perform_op = substract;
        }
        else if (s == "mul")
        {
            perform_op = multiply;
        }
        else if (s == "div")
        {
            perform_op = divide;
        }
        else
        {
            return 0;
        }
        cout << "ans is: " << perform_op(a, b) << endl;
    }
    return 0;
}