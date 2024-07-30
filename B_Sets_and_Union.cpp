#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n;
    cin>>n;
    vector<set<int>>d_array(n);
    set<int>unin;
    for(int i=0;i<n;i++){
        int k;cin>>k;
       for(int j=0;j<k;j++){
            int x;cin>>x;
            d_array[i].insert(x);
            unin.insert(x);
       }
    }

    int ans=0;
    for(auto it:unin){
        set<int>check_max;
        for(int i=0;i<n;i++){
           if(d_array[i].find(it)==d_array[i].end()){
            for(auto ins:d_array[i]){
                check_max.insert(ins);
            }
           }
        }
        ans=max(ans,(int)check_max.size());
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