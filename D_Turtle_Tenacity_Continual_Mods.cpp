#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n;
    cin>>n;
    vector<int>d_array;
    for(int i=0;i<n;i++){
       int x;cin>>x;
       d_array.push_back(x);
    }
    sort(d_array.begin(),d_array.end());
    if(d_array[0]!=d_array[1]){
        cout<<"YES"<<endl;return;
    }
    int on=0;
    for(int i=1;i<n;i++){
       if(d_array[i]%d_array[0]!=0){
        on=1;
        break;
       }
    }
    if(on && d_array[0]!=d_array[n-1])cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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