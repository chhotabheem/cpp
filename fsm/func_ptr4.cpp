#include <iostream>
#include <unordered_map>
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

int main()
{
    unordered_map<int, int (*)(int, int)> func_ptr_map;
    func_ptr_map[0] = add;
    func_ptr_map[1] = substract;
    func_ptr_map[2] = multiply;
    int a = 10, b = 2;
    for (auto kv : func_ptr_map)
    {
        cout << kv.first << " " << kv.second(a, b) << endl;
    }
    return 0;
}