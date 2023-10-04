#include<iostream>
using namespace std;

class Matrix {
    int arr[5];

public:
    
    void incert() {
        cout << "Enter number of the matrix: ";
        for(int i=0; i<5; i++)
            cin >> arr[i];
    }

    // Overloading + operator for matrix addition
    Matrix operator+(Matrix m) {
        Matrix temp;
        for(int i=0; i<5; i++)
            temp.arr[i] = this->arr[i] + m.arr[i];
        return temp;
    }

    // Function to display matrix elements
    void display() {
        cout << "Matrix: ";
        for(int i=0; i<5; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Matrix m1, m2, m3;

    cout << "For matrix 1," << endl;
    m1.incert();

    cout << "For matrix 2," << endl;
    m2.incert();

    m3 = m1 + m2;

    cout << "\nAfter addition," << endl;
    m3.display();

    return 0;
}