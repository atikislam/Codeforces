#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n;
    cin>>n;
    int matrix[n][n];
    vector<int>ans;
    for(int i=0;i<n;i++){
        int p = 1073741823;
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
            if(i==j)continue; 
            p&=matrix[i][j];
        }
        ans.push_back(p);
    }
    for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           if(i!=j && matrix[i][j]!=(ans[i]|ans[j])){
                cout<<"NO"<<endl;
                return;
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