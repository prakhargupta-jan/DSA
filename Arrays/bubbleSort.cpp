/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

void bubbleSort(int arr[], int n) {
    for(int i = n-1; i >= 0; i--) {
        for(int j = 0; j < i; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubbleSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
    

    return 0;
}