#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int n, int x)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] < x)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return -1;
}
int main()
{
    int n, x, arr[n];
    cout << "Enter size of the array ";
    cin >> n;
    cout << "Enter the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the number to be found ";
    cin >> x;
    int index = binarySearch(arr, n, x);
    if (index == -1)
    {
        cout << "Not found";
    }
    else
    {
        cout << "Position of " << x << " is " << index + 1;
    }
}