#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n;
    cin>>n;
    string s;cin>>s;
    int c1=0,c0=0,f=1;
    for(int i=0;i<n;i++){
       if(s[i]=='1'){
        c1++;
        f=1;
       }
       else if(f){
        c0++;
        f=0;
       }
    }
    if(c1>c0)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
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