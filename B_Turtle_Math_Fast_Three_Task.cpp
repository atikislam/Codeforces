#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n;cin>>n;
    long long sum=0;
    int ans=0;
    vector<int>d_array;
    for(int i=0;i<n;i++){
       int x;cin>>x;
       d_array.push_back(x);
       sum+=x;
    }
    for(int i=1;i<=3;i++){
        if(sum%3==0){
            cout<<ans<<endl;return;
        }
       for(int j=0;j<n;j++){
           if((sum-d_array[j])%3==0){
                cout<<i<<endl;return;
           }
       }
       sum++;
       ans++;
    }
    cout<<ans<<endl;
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