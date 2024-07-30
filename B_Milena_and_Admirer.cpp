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
    long long ans=0;
    for(int i=n-1;i>0;i--){
       if(d_array[i-1]>d_array[i]){
        long long operation =(d_array[i-1]+d_array[i]-1)/d_array[i];
        ans+=operation-1;
        d_array[i-1]/=operation;
       }
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