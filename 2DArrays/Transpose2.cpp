//you are given a matrix of size nxn change this matrix into its transpose
// to the actual array instead of making new Array

#include<iostream>
using namespace std;

// Function to input the matrix
void inputMatrix(int myArr[][10], int r, int c) {
    cout << "Enter " << r * c << " elements: ";
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> myArr[i][j];
        }
    }
}

// Function to display the matrix
void displayMatrix(int myArr[][10], int r, int c) {
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << myArr[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to transpose the matrix
void transposeMatrix(int myArr[][10], int r, int c) {
    for(int i = 0; i < r; i++) {
        for(int j = i + 1; j < c; j++) {
            int temp = myArr[i][j];
            myArr[i][j] = myArr[j][i];
            myArr[j][i] = temp;
        }
    }
}

int main() {
    int r, c;

    cout << "Enter Number of rows: ";
    cin >> r;
    cout << "Enter number of columns: ";
    cin >> c;

    int myArr[10][10]; // Define the maximum size for the array
    inputMatrix(myArr, r, c);

    cout << "\nMatrix before transpose:\n";
    displayMatrix(myArr, r, c);

    transposeMatrix(myArr, r, c);

    cout << "\nMatrix after transpose:\n";
    displayMatrix(myArr, r, c);

    return 0;
}
