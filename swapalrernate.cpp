#include <iostream>
using namespace std;
void swap_alternate_number(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
        cout << endl;
    }
}
int main()
{
    int arr[100];
    int size;
    cout << "enter the size of the array";
    cin >> size;
    cout << "enter the elements of the array";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    swap_alternate_number(arr, size);
    print_array(arr, size);
    return 0;
}