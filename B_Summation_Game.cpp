#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n,k,x;
    int ans = INT_MIN;
    cin>>n>>k>>x;
    vector<int>d_array;
    d_array.push_back(0);
    for(int i=0;i<n;i++){
       int x;cin>>x;
       d_array.push_back(x);
    }
    sort(d_array.begin(),d_array.end());
    for(int i=1;i<=n;i++){
       d_array[i]+=d_array[i-1];
    }
    int i=n+1;
    k++;
    while(i-- && k--){
        int need_neg=min(i,x);
        int neg =d_array[i]-d_array[i-need_neg];
        int sum = d_array[i-need_neg]-neg;
        ans=max(ans,sum);
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