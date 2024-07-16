#include <iostream>
#include <windows.h>

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // Инициализация двумерного массива размерностью 3x6
    int array[3][6] = 
    {
        {1,  2,  3,  4,  5,  6},
        {7,  8,  9,  10, 11, 12},
        {13, 14, 15, 16, 17, 18}
    };
    int sizeRow = sizeof(array) / sizeof(array[0]);
    int sizeColums = sizeof(array) / sizeof(array[0][0]);

    for(int i = 0; i < sizeRow; i++)
    {
        std::cout << i << ": " << array[i] << std::endl; 
    }

    return 0;
}
