#include <iostream>
#include <vector>
#include <optional>

std::optional<int> sequential_search(std::vector<int> &v, int target)
{
    size_t size = v.size();
    int index = 0;
    for (; index < size; index++)
    {
        if (v[index] == target)
        {
            return index;
        }
    }
    return std::nullopt;
}

int main()
{
    std::vector<int> v = {1, 3, 45, 46, 57, 89, 95, 100, 123, 1440};
    std::optional<int> result = sequential_search(v, 46);
    if (result.has_value())
    {
        std::cout << "Element found at the index :" << result.value() << std::endl;
    }
    else
    {
        std::cerr << "Error! : Element not found!" << std::endl;
    }
    return 0;
}