#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n,ans=0;
    cin>>n;
    string s;cin>>s;
    map<char,int>freq;
    for(int i=0;i<n;i++){
       freq[s[i]]++;
    }
    for(auto it:freq){
        if(it.first-'A'+1<=it.second)ans++;
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