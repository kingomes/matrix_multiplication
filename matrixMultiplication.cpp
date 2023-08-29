// Filename: matrixMultiplication.cpp
// Description: Program that simplifies the process of multiplying matrices
// Author: Omar Essa
// Date Modified: August 29, 2023

#include <iostream>
using namespace std;

int main()
{
    int matrix1[10][10];
    int matrix2[10][10];
    int resultMatrix[10][10];

    int rows1;
    cout << "How many rows would you like in your first matrix? ";
    cin >> rows1;

    int cols1;
    cout << "How many columns would you like in your first matrix? ";
    cin >> cols1;

    int rows2;
    cout << "How many rows would you like in your second matrix? ";
    cin >> rows2;

    int cols2;
    cout << "How many columns would you like in your second matrix? ";
    cin >> cols2;

    // matrix 1 columns and matrix 2 rows should be equal
    if (cols1 != rows2) 
    {
        cout << "ERR: Cannot multiply matrices when the number of columns of the first one is not equal to the number of rows of the second" << endl;
    }
    else 
    {
        // matrix 1 values
        cout << "Enter values for matrix 1: " << endl;
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < cols1; j++)
            {
                cout << "Enter element at row " << (i + 1) << " column " << (j + 1) << ": ";
                cin >> matrix1[i][j];
            }
        }
        

        // matrix 2 values
        cout << "Enter values for matrix 2: " << endl;
        for (int i = 0; i < rows2; i++)
        {
            for (int j = 0; j < cols2; j++)
            {
                cout << "Enter element at row " << (i + 1) << " column " << (j + 1) << ": ";
                cin >> matrix2[i][j];
            }
        }

        // initialize result matrix to 0
        for (int i = 0; i < rows1; i++) 
        {
            for (int j = 0; j < cols2; j++)
            {
                resultMatrix[i][j] = 0;
            }
        }

        // multiplying two matrices
        for (int i = 0; i < rows1; i++) 
        {
            for (int j = 0; j < cols2; j++)
            {
                for (int k = 0; k < cols1; k++)
                {
                    resultMatrix[i][j] += matrix1[i][k] * matrix2[k][j];
                }
            }
        }

        // print result matrix
        cout << "Result: " << endl;
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < cols2; j++)
            {
                cout << resultMatrix[i][j] << " ";
                if (j == cols2 - 1)
                {
                    cout << endl;
                }
            }
        }
    }
    return 0;
}