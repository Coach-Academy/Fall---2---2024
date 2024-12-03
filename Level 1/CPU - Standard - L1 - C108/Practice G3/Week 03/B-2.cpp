#include <iostream>
using namespace std;

int main()
{
	for(int i = 0 ; i < 26 ; i++){
	    int x; cin>>x;
	    cout<<char('a'+(x-1));
	}
	return 0;
}
