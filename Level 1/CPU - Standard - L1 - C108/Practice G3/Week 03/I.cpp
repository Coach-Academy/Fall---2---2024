#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n; cin>>n;
    int lvl = 0, sum = 0;
    while(sum<=n){
        lvl++;
        sum+=lvl*(lvl+1)/2;
    }
    cout<<lvl-1;
	return 0;
}
