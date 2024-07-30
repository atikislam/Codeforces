#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int h;
    cin>>h;
    if(h<8){
        cout<<"LESS"<<endl;
    }else if(h==8){
        cout<<"PERFECT"<<endl;
    }else{
        cout<<"MORE"<<endl;
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