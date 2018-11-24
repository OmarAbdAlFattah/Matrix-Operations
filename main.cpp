#include <iostream>
#include "Matrix.h"
#include "Matrix.cpp"

using namespace std;

int main()
{

    int data1 [] = {1,2,3,4};
    int data2 [] = {5,6,7,8};
    Matrix matrix1(2, 2, data1);     //construct matrix
    Matrix matrix2(2, 2, data2);    //construct matrix
    Matrix matrix3(2, 2);

    matrix3 = matrix1.getData() + matrix2.getData();


   for(int i = 0 ; i < 4 ; i++){
    //matrix3.getData()[i] = matrix1.getData()[i] + matrix2.getData()[i] ;
      //  matrix3.getData()[i] = 2 * matrix2.getData()[i];
        cout <<matrix3.getData()[i]<<endl;
    }
    return 0;
}
