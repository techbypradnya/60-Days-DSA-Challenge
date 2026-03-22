#include <iostream>
 using namespace std;

 int LeftRotateArray(int arr[],int n){

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
