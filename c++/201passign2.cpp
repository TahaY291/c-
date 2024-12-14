#include<iostream>
using namespace std;

void initialize(int matrix[2][2]){
    for (int i = 0; i < 2; ++i){
        for(int j = 0; j < 2; ++j){
            matrix[i][j] = 0;
        }
    }
}

void addMatrix(int result[2][2], int matrix1[2][2], int matrix2[2][2]){
    for(int i = 0; i < 2; ++i){
        for(int j = 0; j < 2; ++j){
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }   
}

void multiplyByScalarMatrix(int result[2][2], int scalar, int matrix[2][2]){
    for(int i = 0; i < 2; ++i){
        for(int j = 0; j < 2; ++j){
            result[i][j] = scalar * matrix[i][j];
        }
    }
}

void displayMatrix(int matrix[2][2]){
    for(int i = 0; i < 2; ++i){
        for(int j = 0; j < 2; ++j){
            cout << matrix[i][j] << "  ";
        }
        cout << "\n";
    }
}

int main(){
    int A[2][2] = {{1,2}, {3,4}};
    int B[2][2] = {{1,0}, {0,1}};
    int resultMult[2][2], finalResult[2][2];

    initialize(resultMult);
    initialize(finalResult);

    multiplyByScalarMatrix(resultMult, 2, B);
    addMatrix(finalResult, A, resultMult);

    cout << "Matrix A: \n";
    displayMatrix(A);

    cout << "Matrix B: \n";
    displayMatrix(B);

    cout << "-------- \n";
    cout << "Matrix 2*B : \n";
    displayMatrix(resultMult);
    
    cout << "Final resultant matrix [A=(2*B)]:\n";
    displayMatrix(finalResult);

    return 0;
}

