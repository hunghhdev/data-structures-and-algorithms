#include <iostream>

using namespace std;

int gcd(int m, int n)
{
    int r;
    if (m < n)
        return gcd(n, m);
    r = m % n;
    if (r == 0)
        return n;
    else
        return gcd(n, r);
}

int main(int argc, char **argv)
{
    int m, n;
    cout << "Nhap n:";
    cin >> n;
    cout << "Nhap m:";
    cin >> m;
    int kq = gcd(m, n);
    cout << kq;
    return 0;
}
