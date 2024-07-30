#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n;char c;
    cin>>n>>c;
    string s;cin>>s;
    int found_c=0,found_g=0,f=1;
    int ans=0;
    for(int i=0;i<n;i++){
       if(s[i]==c && f){
        found_c=i+1;f=0;
       }
       if(s[i]=='g' && found_c!=0){
        found_g=i+1;
        ans=max(ans,found_g-found_c);
        found_c=0,found_g=0,f=1;
       }
    }
    if(found_c!=0){
        for(int i=0;i<n;i++){
           if(s[i]=='g'){
            ans=max(ans,i+(n-(found_c-1)));break;
           }
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