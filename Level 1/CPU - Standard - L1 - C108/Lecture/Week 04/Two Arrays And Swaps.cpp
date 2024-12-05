#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        int a[n], b[n];
        for(int i = 0 ; i < n ; i++)
        {
            cin>>a[i];
        }
        for(int i = 0 ; i < n ; i++)
        {
            cin>>b[i];
        }
        while(k--){
            int mnA = a[0], posA = 0; // mnA = 2, posA = 1
            for(int i = 0 ; i < n ; i++){
                if(a[i]<mnA)
                {
                    mnA = a[i];
                    posA = i;
                }
            }
            int mxB = b[0], posB = 0; // mxB = 5, posB = 1
            for(int i = 0 ; i < n ; i++){
                if(b[i]>mxB){
                    mxB = b[i];
                    posB = i;
                }
            }
            if(mxB > mnA){
                a[posA] = mxB; // a[1] = 5
                b[posB] = mnA;// b[1] = 2
                //a = 6,5,3
                //b = 4,2,1
            }
            else{
                break;
            }
        }
        int sum = 0;
        for(int i = 0 ; i < n ; i++){
            sum+=a[i];
        }
        cout<<sum<<endl;
    }
}
