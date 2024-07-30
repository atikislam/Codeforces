#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n,m,ans=0;
    cin>>n>>m;
    list<int>petay,vasya;
    for(int i=0;i<n;i++){
       int x;cin>>x;
       petay.push_back(x);
    }
    for(int i=0;i<m;i++){
       int x;cin>>x;
       vasya.push_back(x);
    }
    petay.sort();vasya.sort();
    for(int i=0;i<n;i++){
       if(petay.back()>vasya.back()){
        ans+=petay.back()-vasya.front();
        petay.pop_back();vasya.pop_front();
       }else{
        ans+=vasya.back()-petay.front();
        vasya.pop_back();petay.pop_front();
       }
    }
    cout<<ans<<endl;;
    
    
    
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