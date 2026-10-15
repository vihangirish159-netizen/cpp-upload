#include <iostream>
using namespace std;

class Counter {
    int value;
public:
    Counter() : value(0) {}
    void increment() { ++value; }
    void reset()     { value = 0; }
    int  get() const { return value; }
};

int main() {
    Counter c[3];

    c[0].increment();
    c[1].increment(); c[1].increment();
    for (int i = 0; i < 5; i++) c[2].increment();

    for (int i = 0; i < 3; i++)
        cout << "Counter " << i << " = " << c[i].get() << endl;   // 1, 2, 5

    c[2].reset();
    cout << "After reset, Counter 2 = " << c[2].get() << endl;    // 0
    return 0;
}
