#include <iostream>
using namespace std;

template <typename T>
void Swap(T &a, T &b)
{
    T c = a;
    a = b;
    b = c;
}
int main()
{
    float x = 1.1, y = 2;
    Swap(x, y);
    cout << "x  =  " << x << ",  y  =  " << y << endl;
    return 0;
}