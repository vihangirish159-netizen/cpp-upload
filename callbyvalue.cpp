#include <iostream>
using namespace std;

int add(int x, int y)
{
    return x + y;
}

int main()
{
    int a, b;
    cout <<"Enter two number:";
    cin >> a >> b;

    int sum = add(a, b);
    cout <<"sum =" << sum <<endl;
    return 0;
}