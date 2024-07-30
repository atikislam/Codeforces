#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n,x;
    cin>>n>>x;
    vector<int>d_array;
    for(int i=1;i<=n;i++){
       d_array.push_back(pow(2,i));
    }
    int ans=0;
    for(int i=n-1;i>=n-x;i--){
       ans+=d_array[i];
    }
    for(int i=0;i<n-x;i++){
       ans-=d_array[i];
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