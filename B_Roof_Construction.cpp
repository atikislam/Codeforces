#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n;
    cin>>n;
    int r=n-1;
    while(r>0){
        cout<<r<<" ";
        if((int)log2(r-1)!=(int)log2(r)){
            break;
        }
        r--;
    }
    for(int i=0;i<r;i++){
       cout<<i<<" ";
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