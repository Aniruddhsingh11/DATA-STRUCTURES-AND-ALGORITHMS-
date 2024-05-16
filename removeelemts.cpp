#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

// Function to remove duplicates from the array
vector<int> removeDuplicates(vector<int> &arr)
{
    unordered_set<int> seen;
    vector<int> result;

    for (int num : arr)
    {
        if (seen.find(num) == seen.end())
        {
            seen.insert(num);
            result.push_back(num);
        }
    }

    return result;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    int choice;
    cout << "Enter 1 to remove duplicates, 0 to exit: ";
    cin >> choice;

    if (choice == 1)
    {
        vector<int> result = removeDuplicates(arr);
        cout << "Array after removing duplicates: ";
        for (int num : result)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "Exiting program." << endl;
    }

    return 0;
}
