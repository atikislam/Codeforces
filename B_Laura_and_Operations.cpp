#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if(b%2==0 && c%2==0 || b%2!=0 && c%2!=0){
        cout<<1<<" ";
    }else{
        cout<<0<<" ";
    }
    if(c%2==0 && a%2==0 || c%2!=0 && a%2!=0){
        cout<<1<<" ";
    }else{
        cout<<0<<" ";
    }
    if(a%2==0 && b%2==0 || a%2!=0 && b%2!=0){
        cout<<1<<" ";
    }else{
        cout<<0<<" ";
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