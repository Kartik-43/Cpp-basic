#include <iostream>
using namespace std;

void inputMatrix(int matrix[][10], int rows, int cols, int matrixNumber) 
{
    cout << "Enter elements for Matrix " << matrixNumber << " (" << rows << "x" << cols << "):" << endl;
    
    for (int i = 0; i < rows; ++i) 
    {
        for (int j = 0; j < cols; ++j) 
        {
            cout << "Enter element (" << i + 1 << "," << j + 1 << "): ";
            cin >> matrix[i][j];
        }
    }
    
    cout << endl;
}

void printMatrix(int matrix[][10], int rows, int cols, const string& matrixName) 
{
    cout << matrixName << " (" << rows << "x" << cols << "):" << endl;
    
    for (int i = 0; i < rows; ++i) 
    {
        for (int j = 0; j < cols; ++j) 
        {
            cout << matrix[i][j] << " ";
        }
        
        cout << endl;
    }
    
    cout << endl;
}

void multiplyMatrices(int matrix1[][10], int matrix2[][10], int product[][10], int r1, int c1, int c2) 
{
    for (int i = 0; i < r1; ++i) 
    {
        for (int j = 0; j < c2; ++j) 
        {
            product[i][j] = 0;
            for (int k = 0; k < c1; ++k) 
            {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() {
    int r1, c1, r2, c2;
    int matrix1[10][10], matrix2[10][10], product[10][10];

    cout << "Enter rows and columns for Matrix 1: " << endl;
    cin >> r1 >> c1;

    cout << "Enter rows and columns for Matrix 2: " << endl;
    cin >> r2 >> c2;

    if (c1 != r2) 
    {
        cout << "Matrix multiplication is not possible. The number of columns in Matrix 1 must equal the number of rows in Matrix 2." << endl;
        return 1;
    }

    inputMatrix(matrix1, r1, c1, 1);
    inputMatrix(matrix2, r2, c2, 2);

    cout << "Matrices Entered:" << endl;

    printMatrix(matrix1, r1, c1, "Matrix 1");
    printMatrix(matrix2, r2, c2, "Matrix 2");

    multiplyMatrices(matrix1, matrix2, product, r1, c1, c2);

    cout << "Product of the matrices :-" << endl;
    printMatrix(product, r1, c2, "Product Matrix");

    return 0;
}
