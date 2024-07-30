#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n,x;
    cin>>n>>x;
    vector<int>d_array;
    for(int i=0;i<n;i++){
       int x;cin>>x;
       d_array.push_back(x);
    }
    int min_a=d_array[0];
    int max_a=d_array[0];
    int changes=0;
    for(int i=0;i<n;i++){
       min_a=min(min_a,d_array[i]);
       max_a=max(max_a,d_array[i]);
       if(min_a+x<max_a-x){
        changes++;
        min_a=d_array[i];
        max_a=d_array[i];
       }
    }
    cout<<changes<<endl;
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