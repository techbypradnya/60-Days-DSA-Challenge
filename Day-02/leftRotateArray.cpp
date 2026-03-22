#include <iostream>
 using namespace std;

 int LeftRotateArray(int arr[],int n){
     int first = arr[0];

    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }

    arr[n - 1] = first;

 }

int main() {
   int n;
   cout << "Enter the size of the array : ";
   cin >> n;
   int arr[n];

   cout << " Enter the elements of the array :";
    for(int i =0;i< n ; i++){
        cin >> arr[i];
    }

    cout << "After left rotation: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
   
    return 0;
}
