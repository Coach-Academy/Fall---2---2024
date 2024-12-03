#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int ans;
	for(int i = 1 ; i <= 5 ; i++){
	    for(int j = 1 ; j <= 5 ; j++){
	        int x; cin>>x;
	        if(x==1){
                int r = i-3, c = j-3;
                if(r<0) r*=-1;
                if(c<0) c*=-1;
                ans = r+c;
	        }
	    }
	}
	cout<<ans;
	return 0;
}
