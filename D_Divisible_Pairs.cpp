#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n,x,y;
    cin>>n>>x>>y;
    long long ans=0;
    map<pair<int,int>,int>freq;
    for(int i=0;i<n;i++){
       int a;cin>>a;
       ans+=freq[{(x-(a%x))%x,a%y}];
       freq[{a%x,a%y}]++;
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