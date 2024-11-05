#include <iostream>
using namespace std;

int main()
{
    int a, b, c; cin>>a>>b>>c;
    switch(c){
    case 0:
        if(a>b) cout<<"Takahashi";
        else cout<<"Aoki";
        break;
    case 1:
        if(a>=b) cout<<"Takahashi";
        else cout<<"Aoki";
        break;
    }
    return 0;
}
