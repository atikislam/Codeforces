#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n;
    cin>>n;
    set<int>set_data,temp;
    vector<int>d_array,ans;
    int count=0;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(set_data.count(x)){
            temp.insert(x);
        }
       d_array.push_back(x);
       set_data.insert(x);
       ans.push_back(1);
    }
    if(temp.size()<2){
        cout<<-1<<endl;
        return;
    }
    auto it = temp.begin();
    for(int i=n-1;i>=0;i--){
       if(d_array[i]==*it){
        ans[i]=2;break;
       }
    }
    it++;
    for(int i=n-1;i>=0;i--){
       if(d_array[i]==*it){
        ans[i]=3;break;
       }
    }
    for(auto it:ans){
        cout<<it<<" ";
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