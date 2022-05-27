#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

int main()
{
    srand(time(0));
    const int matrixSize = 5;
    int matrix[matrixSize][matrixSize];

    std::cout << "Matrix: " << std::endl;
    for (int i = 0; i < matrixSize; i++) {
        for (int j = 0; j < matrixSize; j++)
            std::cout << std::setw(5) << (matrix[i][j] = rand() % 25);
        std::cout << std::endl;
    }
    for (int i = 0; i < matrixSize; i++)
        std::swap(matrix[0][i], matrix[matrixSize - 1][i]);

    std::cout << "New matrix: " << std::endl;
    for (int i = 0; i < matrixSize; i++) {
        for (int j = 0; j < matrixSize; j++)
            std::cout << std::setw(5) << matrix[i][j];
        std::cout << std::endl;
    }

    return 0;
}