#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n,chef=0,chefina=0;
    cin>>n;
    string s;cin>>s;
    string check="RPS";
    for(int i=0;i<n;i++){
       if(s[i]=='R')cout<<'P';
       else if(s[i]=='P')cout<<'P';
       else if(s[i]=='S')cout<<'R';
    }
    cout<<endl;
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