// Chuyển cơ số 10 sang 2

#include <iostream>
using namespace std;

void d2b(int n)
{
    if (n > 0)
    {
        int sd = n % 2;
        n = n / 2;
        d2b(n);
        cout << sd; // last in first out
    }
}

int main(int argc, char const *argv[])
{
    int n = 13;
    d2b(n);
    return 0;
}
