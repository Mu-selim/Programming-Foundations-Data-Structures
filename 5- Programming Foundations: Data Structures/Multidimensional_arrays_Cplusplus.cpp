#include <iostream>
using namespace std;

int main()
{
    int array[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    cout << "first element in the array(1)(1) = " << array[0][0] << "\n";
    cout << "last element in the array(3)(3) = " << array[2][2] << "\n";
    cout << "array(2, 2) = " << array[1][1] << "\n";
}