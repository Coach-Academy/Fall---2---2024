#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define el '\n'
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define ull unsigned long long
#define all(v) v.begin(),v.end()
#define r_all(v)  v.rbegin(),v.rend()
#define fsp(n) fixed<<setprecision(n)
#define sz(s) s.size()
const ld Pi = acos(-1);
const int MOD = 10e9 + 7, N = 105;


int main()
{
    string s; cin>>s;
    for(int i = 0 ; i < sz(s) ; i++){
        int n = s[i]-'0';
        if(n==9 && i==0) cout<<n;
        else{
            if(n<=4) cout<<n;
            else cout<<9-n;
        }
    }
    return 0;
}
