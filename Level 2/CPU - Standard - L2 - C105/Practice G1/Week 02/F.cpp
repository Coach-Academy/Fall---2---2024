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
    int n; cin>>n;
    vector<int>v(n);
    for(auto& it : v) cin>>it;
    sort(all(v));
    cout<<1<<' '<<v[0]<<'\n';
    if(v[n-1]>0){
        cout<<1<<' '<<v[n-1]<<'\n';
        cout<<sz(v)-2<<' ';
        for(int i = 1 ; i < n-1 ; i++){
            cout<<v[i]<<' ';
        }
    }
    else{
        cout<<2<<' '<<v[1]<<' '<<v[2]<<el;
        cout<<sz(v)-3<<' ';
        for(int i = 3 ; i < n ; i++){
            cout<<v[i]<<' ';
        }
    }
    return 0;
}
