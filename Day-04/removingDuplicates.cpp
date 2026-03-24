#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int n) {
    // Edge case
    if (n == 0) return 0;

    int i = 0; // pointer for unique elements

    for (int j = 1; j < n; j++) {
        if (arr[j] != arr[i]) {
            i++;
            arr[i] = arr[j];
        }
    }

    return i + 1; // new size of array
}

int main() {
   int n;
   cout <<"Enter the size of the Array :";

   int arr[n];

   cout << "Enter the elements of the array ( in sorted order ) : ";
   for(int i = 0;i < n;i++){
    cin >> arr[i];
   }
    int n = sizeof(arr) / sizeof(arr[0]);

    int newSize = removeDuplicates(arr, n);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nNumber of unique elements: " << newSize;

    return 0;
}