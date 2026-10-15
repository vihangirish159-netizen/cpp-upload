#include <iostream>
using namespace std;

class Counter {
    int value;
    static int totalCreated;   // objects ever created
    static int alive;          // objects currently alive
public:
    Counter() : value(0) { ++totalCreated; ++alive; }
    Counter(const Counter& o) : value(o.value) { ++totalCreated; ++alive; }
    ~Counter() { --alive; }

    void increment() { ++value; }
    void reset()     { value = 0; }
    int  get() const { return value; }

    static int getTotalCreated() { return totalCreated; }
    static int getAlive()        { return alive; }
};

int Counter::totalCreated = 0;
int Counter::alive = 0;

int main() {
    Counter a, b;
    cout << "Created: " << Counter::getTotalCreated()
         << ", Alive: " << Counter::getAlive() << endl;   // 2, 2
    {
        Counter c;
        c.increment();
        cout << "Created: " << Counter::getTotalCreated()
             << ", Alive: " << Counter::getAlive() << endl; // 3, 3
    }
    cout << "Created: " << Counter::getTotalCreated()
         << ", Alive: " << Counter::getAlive() << endl;     // 3, 2
    return 0;
}
