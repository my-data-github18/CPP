#include <iostream>

class matrix
{
    int rows;
    int column;

public:
    matrix()
    {
        this->rows = 3, this->column = 3;
        int *arr[rows];
        for(int i=0;i<3;i++){
            arr[i]= new int[3];
        }
    }
    matrix(int rows, int column)
    {

        this->rows = rows, this->column = column;

        int *arr[rows];
        for(int i=0;i<rows;i++){
            arr[i]= new int[column];
        }

    }
};
int main(){
    matrix m1;
    
}