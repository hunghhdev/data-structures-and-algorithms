#include <iostream>

using namespace std;

bool isEven(int n);
bool isOdd(int n);

bool isEven(int n)
{
    if (n == 0)
        return true;
    else
        return isOdd(n - 1);
}
bool isOdd(int n)
{
    return !isEven(n);
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Nhap n:";
    cin >> n;
    int kq = isEven(n);
    if (kq)
        cout << n << " la so chan";
    else
        cout << n << " la so le";
    cout << endl;
    return 0;
}
