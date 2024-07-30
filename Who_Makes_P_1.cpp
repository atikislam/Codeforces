#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int a,b;
    cin>>a>>b;
    if(a>b){
        cout<<"Dom"<<endl;
    }else{
        cout<<"Tyro"<<endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}