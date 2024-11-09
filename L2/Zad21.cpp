#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int calculateSum(const std::vector<std::vector<int>> &matrix, int rows, int cols)
{
    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i % 2 == 1 || j % 2 == 0)
            {
                sum += matrix[i][j];
            }
        }
    }
    return sum;
}

int main()
{
    int rows, cols;

    std::cout << "Rows: ";
    std::cin >> rows;
    std::cout << "Columns: ";
    std::cin >> cols;

    srand(time(0));

    std::vector<std::vector<int>> matrix(rows, std::vector<int>(cols));

    std::cout << "Matrix:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = rand() % 10;
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    int sum = calculateSum(matrix, rows, cols);
    std::cout << "The sum of elements from even columns or odd rows is: " << sum << std::endl;

    return 0;
}
