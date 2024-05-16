#include <iostream>
using namespace std;

int binary_Search(int arr[], int n, int key)
{
    int start = 0; 
    int end = n - 1;
    int mid = (start + end) / 2; // finding mid of the array 
    while (start <= end) 
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1; // when key is greater then the array of mid so start is mid +1 
        }
        else
        {
            end = mid - 1;  // lower than the mid so end is mid -1 
        }
        mid = (start + end) / 2;
    }
    return -1;
}
int main()
{
    int arr[50];
    int n;
    int key;
    cout << "enter the size of the array" << endl;
    cin >> n;
    cout << "enter the element of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the key to be searched" << endl;
    cin >> key;
    int index = binary_Search(arr, n, key);
    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found in the array." << endl;

    return 0;
}
