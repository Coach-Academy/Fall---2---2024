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
    int n; cin>>n;
    string s; cin>>s;
    for(char ch = 'a' ; ch <= 'z' ; ch++){
        bool ok = 0;
        for(int i = 0 ; i < n ; i++){
            if(s[i]==ch || s[i]==ch-32){
                ok = 1;
                break;
            }
        }
        if(!ok){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
