#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    long long n,ans=0;
    cin>>n;
    map<int,int>freq;
    for(int i=0;i<n;i++){
       int x;cin>>x;
       freq[x]++;
    }
    int i=0;
    for(auto it:freq){
        long long ff=it.second;
        ans+=(ff*(ff-1)*(ff-2))/6LL;
        ans+=(ff*(ff-1)/2LL)*i;
        i+=it.second;
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