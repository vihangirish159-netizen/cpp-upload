#include <iostream>
using namespace std ;
inline int square (int x) {
    return x*x;
}
double square (double x ) {
    return x*x ;
}
int main () {
    int a = 5;
    double b = 5.5;
    cout << "square of " << a << " is " << square (a) << end 1;
    cout << "square of " << b << " is " << square (b) << end 1;
    return 0; 
}
