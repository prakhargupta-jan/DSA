/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int maxSubArrSum(int arr[], int n) {
    int i = 0, j = 0;
    int sm = 0;
    int sln = INT_MIN;
    while (j < n) {
        sm += arr[j];
        sln = max(sm, sln);
        if(sm < 0) {
            i = j;
            sm = 0;
        }
        j++;
    }

    return sln;
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

    cout << maxSubArrSum(arr, n) << endl;
    

    return 0;
}