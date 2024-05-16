#include <iostream>
#include <vector>

std::vector<int> twoSumBruteForce(std::vector<int> &nums, int target)
{
    for (int i = 0; i < nums.size(); ++i)
    {
        for (int j = i + 1; j < nums.size(); ++j)
        {
            if (nums[i] + nums[j] == target)
            {
                return {i, j};
            }
        }
    }
    return {};
}-[]

int main()
{
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    std::vector<int> arr(size);
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i)
    {
        std::cin >> arr[i];
    }

    int target;
    std::cout << "Enter the target sum: ";
    std::cin >> target;

    std::vector<int> result = twoSumBruteForce(arr, target);
    if (result.size() == 2)
    {
        std::cout << "Indices: " << result[0] << " and " << result[1] << std::endl;
    }
    else
    {
        std::cout << "No two elements found with the given target sum." << std::endl;
    }

    return 0;
}
