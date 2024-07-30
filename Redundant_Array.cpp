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
    long long ans;
    int f=1;
    for(int i=1;i<n;i++){
       if(d_array[0]!=d_array[i]){
        ans=(n-(i+1))*d_array[0];
        f=0;
        break;
       }
    }
    for(int i=n-2;i>=0;i--){
       if(d_array[n-1]!=d_array[i]){
        ans=min(ans,(long long)i*d_array[n-1]);
        break;
       }
    }
    (f)?ans=0:ans=min(ans,(long long)n-1);
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