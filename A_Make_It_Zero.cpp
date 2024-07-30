#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
       int x;cin>>x;
    }
    if(n&1){
        cout<<4<<endl; 
        cout<<1<<" "<<n<<endl; 
        cout<<2<<" "<<n<<endl; 
        cout<<1<<" "<<2<<endl; 
        cout<<1<<" "<<2<<endl; 
    }else{
        cout<<2<<endl; 
        cout<<1<<" "<<n<<endl; 
        cout<<1<<" "<<n<<endl; 
    }
    return;
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