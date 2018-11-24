#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED
using namespace std;

class Matrix
{
private:
    int rows;
    int cols;
    int * data;
public:
    int getRows(){return rows;}
    int getCols(){return cols;}
    int* getData(){return data;}

    /*Matrix (Matrix & anotherMatrix){                      //copy constructor
        this -> data = new int[getRows()*getCols()];
        this -> data = anotherMatrix.getData();
    }*/

    Matrix(int rowNum, int colNum, int arr[])   //constructor
    {
        rows = rowNum;
        cols = colNum;
        data = new int [rowNum*colNum];

        for (int i = 0; i < rowNum * colNum; i++){
            data[i] = arr[i];
        }
    }
    Matrix(int rowNum, int colNum)
    {
        rows = rowNum;
        cols = colNum;
        data = new int [rowNum*colNum];

        for (int i = 0; i < rowNum * colNum; i++){
            data[i] = 0;
        }
    }
    Matrix operator+ (Matrix &);
    Matrix operator- (Matrix &);
    Matrix operator* (Matrix &);
    Matrix operator= (Matrix &);

};



#endif // MATRIX_H_INCLUDED
