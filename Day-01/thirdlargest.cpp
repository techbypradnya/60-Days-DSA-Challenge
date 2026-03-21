#include <iostream>
 using namespace std;

 int thirdLargest(int arr[], int n){
    int firstMax = arr[0];
    int SecondMax = arr[1];
    int ThirdMax = arr[2];

    for(int i=0;i<n;i++){
        if(firstMax < arr[i]){
            ThirdMax = SecondMax;
            SecondMax = firstMax;
            firstMax = arr[i];
            
        }else if(SecondMax < arr[i]  )
        {
          ThirdMax = SecondMax;
          SecondMax = arr[i];
        }else if(ThirdMax < arr[i]){
            ThirdMax = arr[i];
        }
        
    }
    return ThirdMax;   
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
    int result = thirdLargest(arr, n);
    cout << " The third largest element in the array is : " << result << endl;

    return 0;
}
