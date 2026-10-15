#include <iostream>
using namespace std;

class Matrix {
    int rows, cols;
    int** data;
public:
    Matrix(int m, int n) : rows(m), cols(n) {
        data = new int*[rows];
        for (int i = 0; i < rows; i++)
            data[i] = new int[cols]();      // () zero-initialises
    }
    // Deep copy constructor
    Matrix(const Matrix& o) : rows(o.rows), cols(o.cols) {
        data = new int*[rows];
        for (int i = 0; i < rows; i++) {
            data[i] = new int[cols];
            for (int j = 0; j < cols; j++)
                data[i][j] = o.data[i][j];
        }
    }
    // Copy assignment disabled to avoid shallow copies
    Matrix& operator=(const Matrix&) = delete;

    ~Matrix() {
        for (int i = 0; i < rows; i++)
            delete[] data[i];
        delete[] data;
    }

    void set(int i, int j, int v) { data[i][j] = v; }
    int  get(int i, int j) const  { return data[i][j]; }

    void display() const {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++)
                cout << data[i][j] << " ";
            cout << endl;
        }
    }
};

int main() {
    Matrix a(2, 3);
    int k = 1;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            a.set(i, j, k++);

    Matrix b = a;        // deep copy
    b.set(0, 0, 99);     // must not affect a

    cout << "a:" << endl; a.display();
    cout << "b:" << endl; b.display();
    return 0;
}
