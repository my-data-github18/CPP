#include <iostream>
using namespace std;

class matrix
{
    int rows;
    int column;
    int **arr;

public:
    matrix()
    {
        this->rows = 3, this->column = 3;
        arr = new int*[rows];
        for (int i = 0; i < 3; i++)
        {
            arr[i] = new int[3];
        }
    }
    matrix(int rows, int column)
    {

        this->rows = rows, this->column = column;

               arr=new int*[rows];

        for (int i = 0; i < rows; i++)
        {
            arr[i] = new int[column];
        }
    }
    void accept()
    {
        cout << "enter the values in matrix:" << endl;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < column; j++)
            {
                cin >> arr[i][j];
            }
        }
    }
    void display()
    {
        cout << " The matrix is :" << endl;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < column; j++)
            {
                cout << arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    
    ~matrix()
    {
        for(int i =0; i<rows;i++)
        delete[] arr[i];

        delete[] arr;
    }
};
int main()
{
    matrix m1;
    m1.accept();
    m1.display();
    matrix m2;
    m2.accept();
    m2.display();

    
}