/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

void selectionSort(int arr[], int n) {
    int p = 0;
    while (p < n-1) {
        int mn = INT_MAX, mnIndex = 0;
        for(int i = p; i < n; i++) {
            if (mn > arr[i]) {
                mn = min(arr[i], mn);
                mnIndex = i;
            }
        }
        swap(arr[mnIndex], arr[p]);
        p++;
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

    selectionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }

    return 0;
}