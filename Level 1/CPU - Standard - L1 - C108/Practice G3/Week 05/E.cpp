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
    string s; getline(cin, s);
    string ans;
    for(int i = 0 ; i < sz(s) ; i++){
        bool exist = 0;
        if(isalpha(s[i])){
            for(int j = 0 ; j < sz(ans) ; j++){
                if(ans[j]==s[i]){
                    exist = 1;
                    break;
                }
            }
            if(!exist) ans.push_back(s[i]);
        }
    }
    cout<<sz(ans);
    return 0;
}
