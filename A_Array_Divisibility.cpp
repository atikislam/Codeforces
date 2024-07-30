#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int sum=0;
        for(int j=i;j<=n;j+=i){
           sum+=j;
        }
        cout<<sum<<" ";
    }cout<<endl;
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