

#include <iostream>
using namespace std;

void getMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}

bool isTranspose(int** matrixA, int** matrixB, int rowsA, int colsA) {
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            if (matrixA[i][j] != matrixB[j][i]) {
                return false;
            }
        }
    }
    return true;
}
int main() {
    int n, m;

    cout << "Enter the number of rows for Matrix A: ";
    cin >> n;
    cout << "Enter the number of columns for Matrix A: ";
    cin >> m;

    // Dynamically allocate memory for Matrix A
    int** matrixA = new int* [n];
    for (int i = 0; i < n; i++) {
        matrixA[i] = new int[m];
    }

    cout << "Enter the elements of Matrix A:" << endl;
    getMatrix(matrixA, n, m);

    // Dynamically allocate memory for Matrix B (transpose of A)
    int** matrixB = new int* [m];
    for (int i = 0; i < m; i++) {
        matrixB[i] = new int[n];
    }

    cout << "Enter the elements of Matrix B:" << endl;
    getMatrix(matrixB, m, n);

    // Check if Matrix B is the transpose of Matrix A
    if (isTranspose(matrixA, matrixB, n, m)) {
        cout << "Matrix B is the transpose of Matrix A." << endl;
    }
    else {
        cout << "Matrix B is NOT the transpose of Matrix A." << endl;
    }
   
    // Free allocated memory
    for (int i = 0; i < n; i++) {
        delete[] matrixA[i];
    }
    delete[] matrixA;

    for (int i = 0; i < m; i++) {
        delete[] matrixB[i];
    }
    delete[] matrixB;

    return 0;
}
