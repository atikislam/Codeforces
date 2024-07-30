#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n;
    cin>>n;
    vector<int>d_array;
    for(int i=0;i<n;i++){
       int x;cin>>x;
       d_array.push_back(x);
    }
    int ans=d_array[0];
    for(int i=1;i<n;i++){
        int cnt=1;
        if(ans>=d_array[i]){
            ans+=(d_array[i]);
            ans=d_array[i]*(ans/d_array[i]);
        }
        else ans=d_array[i];
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