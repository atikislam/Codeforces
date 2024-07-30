#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>>d_array;
    for(int i=0;i<n;i++){
       int x;cin>>x;
       d_array.push_back({x,i+1});
    }
    int i=0;
    while(i<n){
        if(i+1<n && d_array[i].first==d_array[i+1].first){
            swap(d_array[i],d_array[i+1]);
            i++;
        }else if(i!=0 && d_array[i].first==d_array[i-1].first){
            swap(d_array[i],d_array[i-1]);
        }else{
            cout<<-1<<endl;return;
        }
        i++;
    }
    for(auto it:d_array){
        cout<<it.second<<" ";
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