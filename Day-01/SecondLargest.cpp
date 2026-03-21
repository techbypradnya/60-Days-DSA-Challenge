#include <iostream>
 using namespace std;

 int secondLargest(int arr[], int n){
    int firstMax = arr[0];
    int SecondMax = arr[1];

    for(int i=0;i<n;i++){
        if(firstMax < arr[i]){
            SecondMax = firstMax;
            firstMax = arr[i];
            
        }else if(SecondMax < arr[i]  )
        {
          SecondMax = arr[i];
        }
        
    }
    return SecondMax;   
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
 int result = secondLargest(arr, n);
 cout << " The second largest element in the array is : " << result << endl;

    return 0;
}
