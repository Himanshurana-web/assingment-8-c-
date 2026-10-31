// Function to Find Sum of Two Matrices

#include <iostream>
using namespace std;

void matrixSum(int A[2][2], int B[2][2])
{
    int C[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
            C[i][j] = A[i][j] + B[i][j];
    }

    cout << "Sum of matrices:\n";

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
            cout << C[i][j] << " ";

        cout << endl;
    }
}

int main()
{
    int A[2][2] = {{1, 2}, {3, 4}};
    int B[2][2] = {{5, 6}, {7, 8}};

    matrixSum(A, B);

    return 0;
}