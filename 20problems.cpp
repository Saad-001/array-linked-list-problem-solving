#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    int min_arr[k]={0};
    int max_arr[k]={0};

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    for(int i=0; i<k; i++){
        min_arr[i] = arr[i];
    }

    sort(arr, arr + n, greater<int>());

    for(int i=0; i<k; i++){
        max_arr[i] = arr[i];
    }

    cout << min_arr[k-1] << " " << max_arr[k-1] << endl;

    return 0;
}
