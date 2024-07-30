#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n;
    cin>>n;
    int yes=1;
    for(int i=0;i<n;i++){
       int x;cin>>x;
       if(x<=4)yes=0;
    }
    if(yes)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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