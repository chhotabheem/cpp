#include <iostream>
using namespace std;

void print()
{
    cout << "inside print function" << endl;
}

int main()
{
    void (*print_fn_ptr)();
    print_fn_ptr = print;
    (*print_fn_ptr)();
    return 0;
}