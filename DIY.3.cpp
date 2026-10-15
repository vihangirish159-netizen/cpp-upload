#include <iostream>
using namespace std;

class Order {
    int id;
    static int nextId;
public:
    Order() : id(nextId++) {}
    int getId() const { return id; }
};

int Order::nextId = 1001;

int main() {
    Order o1, o2, o3;
    cout << "Order IDs: " << o1.getId() << ", "
         << o2.getId() << ", " << o3.getId() << endl;  // 1001, 1002, 1003
    return 0;
}
