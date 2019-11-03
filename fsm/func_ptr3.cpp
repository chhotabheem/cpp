#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

void print_add(int (*add_fn_ptr)(int, int), int a, int b)
{
    cout << "ans is: " << add_fn_ptr(a, b) << endl;
}
int main()
{
    print_add(add, 5, 4);
    return 0;
}