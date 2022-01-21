/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;


void insertionSort(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int p = arr[i];
        bool swapped = false;;
        for (int j = i-1; j >= 0; j--) {
            if(arr[j] < arr[i]) {
                for(int k = i; k > j+1; k--) {
                    arr[k] = arr[k-1];
                }
                arr[j+1] = p;
                swapped = true;
                break;
            }
        }
        if (!swapped) {
            for(int k = i; k > 0; k--) {
                arr[k] = arr[k-1];
            }
            arr[0] = p;
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
    
    insertionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    

    return 0;
}