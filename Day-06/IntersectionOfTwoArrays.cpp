#include <iostream>
using namespace std;

int UnionOfTwoArrays(int arr1[], int arr2[], int n, int m, int unionArr[])
{
    int k = 0;

    // Add all elements of first array
    for (int i = 0; i < n; i++)
    {
        unionArr[k++] = arr1[i];
    }

    // Add unique elements from second array
    for (int i = 0; i < m; i++)
    {
        bool isDuplicate = false;

        for (int j = 0; j < k; j++)
        {
            if (arr2[i] == unionArr[j])
            {
                isDuplicate = true;
                break;
            }
        }

        if (!isDuplicate)
        {
            unionArr[k++] = arr2[i];
        }
    }

    return k; // size of union
}

int main()
{
    int n, m;
    cout << "Enter the size of the First Array:" << endl;
    cin >> n;

    cout << "Enter the size of the Second Array:" << endl;
    cin >> m;

    int arr1[n], arr2[m], unionArr[n + m];

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

    int size = UnionOfTwoArrays(arr1, arr2, n, m, unionArr);

    cout << "Union of the Two Arrays is: ";
    for (int i = 0; i < size; i++)
    {
        cout << unionArr[i] << " ";
    }

    cout << "\nTotal number of union elements: " << size << endl;

    return 0;
}