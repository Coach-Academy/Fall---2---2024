#include <iostream>
using namespace std;

int main()
{
    int n; cin>>n;
    int arr[n+5];
    for(int i = 1 ; i < n ; i++){
        cin>>arr[i];
    }
    int a, b; cin>>a>>b;
    int sum = 0;
    for(int i = a ; i < b ; i++){
        sum+=arr[i];
    }
    cout<<sum;
	return 0;
}
