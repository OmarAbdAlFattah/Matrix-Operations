#include <iostream>
using namespace std;

Matrix Matrix::operator + ( Matrix & secondMatrix)
{
    Matrix sumMartix(rows, cols);
    for(int i = 0; i < rows*cols; i++)
    {
        sumMartix.getData()[i] = data[i] + secondMatrix.getData()[i];
    }
    return sumMartix;
}
Matrix Matrix::operator - (Matrix & secondMatrix){

    Matrix subMatrix(rows, cols);
    for(int i = 0; i < rows*cols; i++){
            subMatrix.getData()[i] = data[i] - secondMatrix.getData()[i];
    }
    return subMatrix;
}

Matrix Matrix::operator * (Matrix & secondMatrix){
    Matrix multiMatrix(rows, cols);
    if(rows == secondMatrix.cols){
        for(int i = 0; i < rows*cols; ++i){
                for(int k = 0 ; i < cols ; ++k)
                    multiMatrix.getData()[i] = data[i] * secondMatrix.data[i+k];        //in case of 2d array
        }
    }
    return multiMatrix;
}


//Matrix operator- (int n, Matrix &);
//Matrix operator* (int n, Matrix &);

Matrix operator*(int n, Matrix & secondMatrix){     //scalar
    Matrix scalarAddMatrix(secondMatrix.getRows(), secondMatrix.getCols());
    for(int i = 0; i < secondMatrix.getRows()*secondMatrix.getCols(); i++){
        scalarAddMatrix.getData()[i] = n * secondMatrix.getData()[i];
    }
    return scalarAddMatrix;
}

Matrix operator+(int n, Matrix & secondMatrix){
    Matrix scalarAddMatrix(secondMatrix.getRows(), secondMatrix.getCols());
    for(int i = 0; i < secondMatrix.getRows()*secondMatrix.getCols(); i++){
        scalarAddMatrix.getData()[i] = n + secondMatrix.getData()[i];
    }
    return scalarAddMatrix;
}

Matrix operator-(int n, Matrix & secondMatrix){
    Matrix scalarAddMatrix(secondMatrix.getRows(), secondMatrix.getCols());
    for(int i = 0; i < secondMatrix.getRows()*secondMatrix.getCols(); i++){
        scalarAddMatrix.getData()[i] = n - secondMatrix.getData()[i];
    }
    return scalarAddMatrix;
}
