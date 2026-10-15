#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    int id;
public:
    Employee(string n, int i) : name(n), id(i) {}
    void display() const {
        cout << "Name: " << name << ", ID: " << id << endl;
    }
};

class Manager : public Employee {
    int teamSize;
public:
    Manager(string n, int i, int t) : Employee(n, i), teamSize(t) {}
    void display() const {
        cout << "[Manager]  ";
        Employee::display();
        cout << "           Team size: " << teamSize << endl;
    }
};

class Engineer : public Employee {
    string skill;
public:
    Engineer(string n, int i, string s) : Employee(n, i), skill(s) {}
    void display() const {
        cout << "[Engineer] ";
        Employee::display();
        cout << "           Skill: " << skill << endl;
    }
};

int main() {
    Manager m("Asha", 101, 8);
    Engineer e("Ravi", 202, "Embedded C");
    m.display();
    e.display();
    return 0;
}
