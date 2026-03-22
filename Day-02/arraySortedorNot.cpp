#include <iostream>
using namespace std;

int arraySorted(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
        }
    return true;
}

int main()
{
    int n;
    cout << " Enter the size of the array : ";
    cin >> n;
    int arr[n];
    cout << " Enter the elements of the array :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (arraySorted(arr, n))
    {
        cout << "Array is Sorted" << endl;
    }
    else
    {
        cout << "Array is not sorted" << endl;
    }
    return 0;
}
