#include <iostream>
using namespace std;
bool linear_search(int arr[], int size, int key)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[100];
    int size;
    int key;
    cout << "enter the size of array" << endl;
    cin >> size;
    cout << "enter the no of elements in the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the no to be searched" << endl;
    cin >> key;
    bool found = linear_search(arr, size, key);
    if (found)
    {
        cout << "key is present" << endl;
    }
    else
    {
        cout << "key is not present" << endl;
    }
}
// linear search 