#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define el '\n'
#define osos ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define ull unsigned long long
#define all(v) v.begin(),v.end()
#define r_all(v)  v.rbegin(),v.rend()
#define fsp(n) fixed<<setprecision(n)
#define sz(s) s.size()
const ld Pi = acos(-1);


int main()
{
    osos
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>v(n+5);
        vector<int>pos(n+5);
        for(int i = 0 ; i < n ; i++){
            cin>>v[i];
            pos[v[i]] = i;
        }
        int last = n;
        for(int i = n ; i >= 1 ; i--){
            for(int j = pos[i] ; j < last ; j++){
                cout<<v[j]<<' ';
            }
            last = min(last, pos[i]);
        }
        cout<<el;
    }
    return 0;
}
