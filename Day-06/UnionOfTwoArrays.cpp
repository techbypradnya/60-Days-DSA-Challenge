#include <iostream>
using namespace std;

int UnionOfTwoArrays(int arr1[], int arr2[], int n, int m)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr1[i] == arr2[j])
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int n, m;
    cout << "Enter the size of the First Array:" << endl;
    cin >> n;
    cout << "Enter the size of the Second Array:" << endl;
    cin >> m;

    int arr1[n], arr2[m];
    cout << "Enter the Elements of the First Array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter the Elements of the Second Array:" << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    int result = UnionOfTwoArrays(arr1, arr2, n, m);
    cout << "The Union of the Two Arrays is : " << result << endl;
    return 0;
}
