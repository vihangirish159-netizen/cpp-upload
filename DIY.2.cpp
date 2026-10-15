#include <iostream>
#include <iomanip>
using namespace std;

class Time {
    int hh, mm;
public:
    Time(int h = 0, int m = 0) : hh(h), mm(m) {}
    void display() const {
        cout << setfill('0') << setw(2) << hh << ":" << setw(2) << mm << endl;
    }
    friend Time laterOf(Time a, Time b);
};

Time laterOf(Time a, Time b) {
    int ta = a.hh * 60 + a.mm;
    int tb = b.hh * 60 + b.mm;
    return (ta >= tb) ? a : b;
}

int main() {
    Time t1(9, 45), t2(14, 5);
    cout << "Later time: ";
    laterOf(t1, t2).display();   // 14:05
    return 0;
}
