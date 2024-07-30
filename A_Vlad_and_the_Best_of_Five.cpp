#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    string s;cin>>s;
    int n=s.size();
    int a=0,b=0;
    for(int i=0;i<n;i++){
       if(s[i]=='A')a++;
       else b++;
    }
    if(a>b)cout<<'A'<<endl;
    else cout<<'B'<<endl;
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