/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

bool pairSum(int arr[], int n, int k) {
    int i = 0, j = n - 1;
    while ( i < j) {
        if(arr[i] + arr[j] == k)
            return true;
        else if (arr[i] + arr[j] > k) 
            j--;
        else 
            i++;
    }
    return false;
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
    
    cout << (pairSum(arr, n, k) ? "True" : "False") << endl;
    

    return 0;
}