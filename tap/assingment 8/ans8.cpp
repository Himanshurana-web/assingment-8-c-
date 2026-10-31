// 8. Function to Find Sum of Diagonal Numbers in Matrix

#include <iostream>
using namespace std;

int diagonalSum(int matrix[3][3])
{
    int sum = 0;

    for (int i = 0; i < 3; i++)
        sum += matrix[i][i];

    return sum;
}

int main()
{
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Sum of diagonal elements: "
         << diagonalSum(matrix);

    return 0;
}