#include <iostream>
using namespace std;

int findMissing(int arr[], int n) {
    int total = n * (n + 1) / 2;
    int sum = 0;

    for(int i = 0; i < n - 1; i++) {
        sum += arr[i];
    }

    return total - sum;
}

int main() {
    int n;

    cout << "Enter the size of the array (n-1): " << endl;  // FIX
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array:\n";  // FIX
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Missing number: " << findMissing(arr, n + 1);

    return 0;
}
