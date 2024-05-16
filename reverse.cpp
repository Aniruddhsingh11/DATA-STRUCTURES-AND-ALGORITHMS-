#include <iostream>
using namespace std;

int reverse_array(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[100];
    int size;
    cout << "enter the size of an array" << endl;
    cin >> size;
    cout << "enter the elements of an array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    reverse_array(arr, size);
    print_array(arr, size);
}
// reverse the array