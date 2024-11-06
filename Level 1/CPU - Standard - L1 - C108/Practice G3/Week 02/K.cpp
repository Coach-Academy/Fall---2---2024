#include <iostream>
using namespace std;

int main()
{
    long long n, k; cin>>n>>k;
    if(k<=(n+1)/2) cout<<k*2-1; //odd half
    else cout<<(k - ((n+1)/2))*2; //even half
    return 0;
}
