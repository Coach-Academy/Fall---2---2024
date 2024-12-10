#include <iostream>
using namespace std;

int main()
{
    int arr[6][6] = {0};
    for(int i = 1 ; i < 4 ; i++){
        for(int j = 1 ; j < 4 ; j++){
            cin>>arr[i][j];
        }
    }

    for(int i = 1 ; i < 4 ; i++){
        for(int j = 1 ; j < 4 ; j++){
            int toggles = arr[i][j] + arr[i-1][j]
              +arr[i+1][j]+arr[i][j-1]+arr[i][j+1];
            if(toggles%2) cout<<0;
            else cout<<1;
        }cout<<'\n';
    }
	return 0;
}
