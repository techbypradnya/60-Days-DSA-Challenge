#include <iostream>
#include <vector>
using namespace std;

int largestElement(vector<int> &arr)
{
    int max = arr[0];
    for (int num : arr)
    {
        if (num > max)
        {
            max = num;
        }
    }

    return max;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);

    cout << "Enter the elements of the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = largestElement(arr);

    cout << " the largest Element in the array is:" << result << endl;
    return 0;
}
