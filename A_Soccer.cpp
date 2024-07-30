#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    if(x1>y1 && y2>x2 || x1<y1 && y2<x2){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
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