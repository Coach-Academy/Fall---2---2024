#include <iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
using namespace std;

int main()
{
    int n; cin>>n;
    int arr[n+5];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    cout<<(arr[0]==1 ? -1 : 1);
    return 0;
}
