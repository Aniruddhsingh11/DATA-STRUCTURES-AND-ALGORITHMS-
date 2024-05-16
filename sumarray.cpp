#include <iostream>
using namespace std;
int sum_of_array(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int main()
{
    int arr[100];
    int size;
    cout << "enter the size of array" << endl;
    cin >> size;
    cout << "enter the elements of an array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "the sum of the array is " << sum_of_array(arr, size) << endl;
    return 0;
}
// array basics