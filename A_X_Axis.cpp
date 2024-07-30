#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];
    int ans=1000000;
    for(int i=0;i<3;i++){
        int temp=0;
       for(int j=0;j<3;j++){
           temp+=abs(arr[i]-arr[j]);
       }
       ans=min(ans,temp);
    }
    cout<<ans<<endl;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}