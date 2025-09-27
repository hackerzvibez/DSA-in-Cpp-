#include <iostream>
#include <vector>
#include <optional>

template <typename T, typename V>
std::optional<size_t> binary_Search(const T &t, const V target);

void print_result(const std::optional<size_t> &r);

int main()
{
    std::vector<int> v = {1, 3, 4, 5, 23, 46, 72, 81, 95, 123};
    int num[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::vector<double> d = {
        1.1,
        3.14,
        3.300,
        4.4,
        6.0,
        10.992,
        11.332,
    };
    std::optional<size_t>
        result = binary_Search(v, 123);
    print_result(result);
    result = binary_Search(num, 5);
    print_result(result);
    result = binary_Search(d, 3.14);
    print_result(result);
    result = binary_Search(d, 2.22);
    print_result(result);
    return 0;
}
template <typename T, typename V>
std::optional<size_t> binary_Search(const T &t, const V target)
{
    size_t length = 0;
    for (auto var : t)
    {
        length += 1;
    }
    size_t low_Index = 0;
    size_t high_Index = length - 1;
    while (low_Index <= high_Index)
    {
        size_t middle_Index = low_Index + (high_Index - low_Index) / 2;
        if (t[middle_Index] == target)
        {
            return middle_Index;
        }
        else if (t[middle_Index] > target)
        {
            high_Index = middle_Index - 1;
        }
        else
        {
            low_Index = middle_Index + 1;
        }
    }
    return std::nullopt;
}

void print_result(const std::optional<size_t> &r)
{
    if (r.has_value())
    {
        std::cout << "Value found at the Index[] : " << r.value() << std::endl;
    }
    else
    {
        std::cerr << "<Error>! Value not found !" << std::endl;
    }
}