#include <iostream>

using namespace std;

int fib(int n)
{
    if (n <= 2)
        return 1;
    return fib(n - 1) + fib(n - 2);
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Nhap n:";
    cin >> n;
    int f = fib(n);
    cout << f;
    return 0;
}
