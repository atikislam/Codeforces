#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n;
    cin>>n;
    int m[n][n];
    vector<int>ans;
    for(int i=0;i<n;i++){
        int comon_bit=(1<<30)-1;
       for(int j=0;j<n;j++){
           cin>>m[i][j];
           if(i!=j)comon_bit &=m[i][j];
       }
       ans.push_back(comon_bit);
    }
    for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           if(i!=j && m[i][j]!=(ans[i]|ans[j])){
            cout<<"NO"<<endl;return;
           }
       }
    }
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++){
       cout<<ans[i]<<" ";
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