#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n;
    cin>>n;
    string s;cin>>s;
    int f_index=-1;
    for(int i=0;i<n;i++){
       if(s[i]=='B'){
        f_index=i;break;
       }
    }
    if(f_index==-1){
        cout<<0<<endl;return;
    }
    int l_index=-1;
    for(int i=n-1;i>=0;i--){
       if(s[i]=='B'){
        l_index=i;break;
       }
    }
    cout<<l_index-f_index+1<<endl;
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