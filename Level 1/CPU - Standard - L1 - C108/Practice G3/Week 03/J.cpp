#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n; cin>>n;
    int four = 0, three = 0, two = 0, one = 0;
    for(int i = 0 ; i < n ; i++){
        int x; cin>>x;

        four+=(x==4); three+=(x==3);
        two+=(x==2); one+=(x==1);
    }
    int ans = 0;
    ans+=four;
    int m;
    if(three<=one) m = three;
    else m = one;
    ans+=m;
    three-=m;
    one-=m;
    ans+=three;
    ans+=ceil((one + two*2)/4.0);
    cout<<ans;
	return 0;
}
