#include <iostream>
#include <iomanip>
using namespace std;

class Matrix {
private:
    int rows;
    int columns;
    int **data;

public:
    
    Matrix() : rows(0), columns(0), data(nullptr) {}

  
    Matrix(int r, int c) : rows(r), columns(c) {
        data = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            data[i] = new int[columns];
        }
    }


    ~Matrix() {
        for (int i = 0; i < rows; ++i) {
            delete[] data[i];
        }
        delete[] data;
    }


    void accept() {
        cout << "Enter matrix elements:" << endl;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < columns; ++j) {
                cout << "Enter element at position [" << i << "][" << j << "]: ";
                cin >> data[i][j];
            }
        }
    }

   
    void print() {
        cout << "Matrix:" << endl;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < columns; ++j) {
                cout << setw(4) << data[i][j];
            }
            cout << endl;
        }
    }

   
    Matrix add(const Matrix& other) {
        Matrix result(rows, columns);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < columns; ++j) {
                result.data[i][j] = data[i][j] + other.data[i][j];
            }
        }
        return result;
    }

   
    Matrix subtract(const Matrix& other) {
        Matrix result(rows, columns);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < columns; ++j) {
                result.data[i][j] = data[i][j] - other.data[i][j];
            }
        }
        return result;
    }


    Matrix multiply(const Matrix& other) {
        Matrix result(rows, other.columns);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < other.columns; ++j) {
                result.data[i][j] = 0;
                for (int k = 0; k < columns; ++k) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }
        return result;
    }

  
    Matrix transpose() {
        Matrix result(columns, rows);
        for (int i = 0; i < columns; ++i) {
            for (int j = 0; j < rows; ++j) {
                result.data[i][j] = data[j][i];
            }
        }
        return result;
    }
};

int main() {
    int rows, cols;
    cout << "Enter number of rows for the matrix: ";
    cin >> rows;
    cout << "Enter number of columns for the matrix: ";
    cin >> cols;

   
    Matrix matrix1(rows, cols);
    Matrix matrix2(rows, cols);

    cout << "Enter elements for matrix 1:" << endl;
    matrix1.accept();

    cout << "Enter elements for matrix 2:" << endl;
    matrix2.accept();

   
    Matrix sum = matrix1.add(matrix2);
    Matrix difference = matrix1.subtract(matrix2);
    Matrix product = matrix1.multiply(matrix2);
    Matrix transposed = matrix1.transpose();

   
    cout << "Sum of the matrices:" << endl;
    sum.print();

    cout << "Difference of the matrices:" << endl;
    difference.print();

    cout << "Product of the matrices:" << endl;
    product.print();

    cout << "Transpose of matrix 1:" << endl;
    transposed.print();

    return 0;
}

