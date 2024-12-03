#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n; cin>>n;
    bool ok = 0;
    for(int i = 1 ; i <= n ; i++){
        bool lucky = 1;
        int tmp = i;
        while(tmp!=0){
            int lst = tmp%10;
            if(lst!=4 && lst!=7){
                lucky = 0;
                break;
            }
            tmp/=10;
        }
        if(lucky and n%i==0)
        {
            ok = true;
            break;
        }
    }
    cout<<(ok ? "YES" : "NO");
	return 0;
}
