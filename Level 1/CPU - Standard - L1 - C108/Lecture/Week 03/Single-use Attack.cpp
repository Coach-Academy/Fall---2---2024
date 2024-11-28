#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t; cin>>t;
   while(t--){
     int h, x, y; cin>>h>>x>>y;
     h-=y;
     if(h<=0){
        cout<<1<<endl;
        continue;
     }
     int cnt = 1;
     while(h>0){
        h-=x;
        cnt++;
     }
     cout<<cnt<<endl;
   }
}
