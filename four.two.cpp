#include <iostream>
#include<cstring>
using namespace std;

class Mystring 
{
    char *data;
    public:
    Mystring(const char *s)
    {
        data = new char[strlen(s) + 1];
        strcpy(data, s);
    }
    Mystring (const Mystring &o)
    {
        data = new char[strlen(o.data) + 1];
        strcpy(data, o.data);
    } 
    ~ Mystring () {delete [] data;}
    void print () const {cout << data << endl;}
};

int main ()
{
    Mystring a("Hardware");
    Mystring b = a;
    a.print();
    b.print();
    return 0;
}