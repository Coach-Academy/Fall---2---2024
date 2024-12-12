#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s; cin>>s;
    while(!s.empty() && s.back()=='0')
        s.pop_back();
    string t = s;
    reverse(t.begin(), t.end());
    cout<<(s==t ? "Yes" : "No");
	return 0;
}
