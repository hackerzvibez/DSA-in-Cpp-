#include <iostream>
#include <vector>

int sumArray(std::vector<int> &v)
{
    int size = v.size();
    int index = 0;
    int total = 0;
    for (index; index < size; index++)
    {
        total = total + v[index];
    }
    return total;
}

int main()
{
    std::vector<int> v = {23, 45, 59, 69, 82, 73, 95, 46, 15, 19, 1};

    std::cout << "The sum of the Array is :" << sumArray(v) << std::endl;

    return 0;
}