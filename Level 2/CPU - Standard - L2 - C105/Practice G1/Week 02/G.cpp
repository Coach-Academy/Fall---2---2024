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
    int n, m, ans; cin>>n>>m;
    double mx = 0;
    for(int i = 1 ; i <= n ; i++){
        double x; cin>>x;
        if(ceil(x/m) >= mx){
            ans = i;
            mx = ceil(x/m);
        }
    }
    cout<<ans;
    return 0;
}
