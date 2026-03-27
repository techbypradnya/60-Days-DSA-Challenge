#include <iostream>
 using namespace std;

int main() {
   int n , m ;
   cout << "Enter the size of the First Array:"<< endl;
   cin >> n ;
   cout << "Enter the size of the Second Array:"<< endl;
   cin >> m ;

   int arr1[n] ,arr2[m];
   cout << "Enter the Elements of the First Array:"<< endl;
   for(int i = 0 ; i < n ; i++){
    cin >> arr1[i];
   }
   
   cout << "Enter the Elements of the Second Array:"<< endl;
   for(int i = 0; i < m ; i++){
    cin >> arr2[i]; 
   }
    return 0;
}
