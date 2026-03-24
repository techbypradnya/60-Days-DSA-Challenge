#include <iostream>
using namespace std;

void AllZeroAtEnd(int arr[], int n)
{
    int index = 0;
    for(int i = 0;i < n;i++){
        if(arr[i] != 0){
            arr[index] = arr[i];
            index++;
        }
    }
    while(index < n){
        arr[index] = 0;
        index++;
    }

    // int j = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] != 0)
    //     {
    //         int temp = arr[i];
    //         arr[i] = arr[j];
    //         arr[j] = temp;
    //         j++;
    //     }
    // }
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    AllZeroAtEnd(arr, n);
    cout << "After Moving Zeros at the end:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}