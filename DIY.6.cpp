#include <iostream>
using namespace std;

class Tracer {
    int id;
public:
    Tracer(int i) : id(i) { cout << "Tracer " << id << " created" << endl; }
    ~Tracer()             { cout << "Tracer " << id << " destroyed" << endl; }
};

int main() {
    for (int i = 1; i <= 3; i++) {
        Tracer* t = new Tracer(i);
#ifndef LEAK
        delete t;      // without this line the object is never destroyed -> leak
#endif
    }
    cout << "Loop finished" << endl;
    return 0;
}
