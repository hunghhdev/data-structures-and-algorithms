// Tổ hợp

#include <iostream>
using namespace std;

int C(int n, int k)
{
    if (k == 0 || n == k)
        return 1;
    return C(n - 1, k) + C(n - 1, k - 1);
}

int main(int argc, char const *argv[])
{
    int n = 5;
    int k = 3;
    int kq = C(n, k);
    cout << kq;
    return 0;
}
