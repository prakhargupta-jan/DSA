/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;


// JUGADU
int binarySearch(int arr[], int n, int k) {
    cout << arr[0] << endl;
    if(n == 0 || (n == 1 && arr[0] != k) ) {
        return 0;
    }

    if(arr[n/2] == k) {
        return 1;
    }
    else if(arr[n/2] > k) {
        return binarySearch(arr, n/2, k);
    } else {
        return binarySearch(arr + n/2, n - n/2, k);
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << binarySearch(arr, n, k) << " yahi hai answer";
    

    return 0;
}