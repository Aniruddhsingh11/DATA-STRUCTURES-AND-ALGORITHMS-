#include <iostream>
using namespace std;

int find_duplicate(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                return arr[i];
            }
        }
    }
    return -1; // Return -1 if no duplicate is found
}

int main()
{
    int arr[100];
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "Enter the elements in the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int duplicate = find_duplicate(arr, size);
    if (duplicate != -1)
    {
        cout << "The duplicate number is: " << duplicate << endl;
    }
    else
    {
        cout << "No duplicate number found." << endl;
    }
    return 0;
}
