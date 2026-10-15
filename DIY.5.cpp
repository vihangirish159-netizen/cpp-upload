#include <iostream>
using namespace std;

class Stack {
    int* arr;
    int capacity;
    int top;                       // index of next free slot
public:
    Stack(int cap = 4) : capacity(cap), top(0) { arr = new int[capacity]; }
    Stack(const Stack&) = delete;
    Stack& operator=(const Stack&) = delete;
    ~Stack() { delete[] arr; cout << "Stack buffer released" << endl; }

    void push(int x) {
        if (top == capacity) {     // grow when full
            int* bigger = new int[capacity * 2];
            for (int i = 0; i < top; i++) bigger[i] = arr[i];
            delete[] arr;
            arr = bigger;
            capacity *= 2;
        }
        arr[top++] = x;
    }

    bool pop(int& out) {
        if (top == 0) return false;   // empty
        out = arr[--top];
        return true;
    }

    bool empty() const { return top == 0; }
};

int main() {
    Stack s;
    for (int i = 1; i <= 6; i++) s.push(i * 10);

    int v;
    while (s.pop(v))
        cout << "Popped " << v << endl;
    return 0;
}
