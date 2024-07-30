#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n=22;
    int man_of_match=-1;
    vector<pair<int,int>>d_array;
    for(int i=0;i<n;i++){
       int a,b;cin>>a>>b;
       d_array.push_back({a,b});
    }
    int temp=0;
    for(int i=0;i<n;i++){
        int score=d_array[i].first+(d_array[i].second*20);
        if(score>temp){
            temp=score;
            man_of_match=i;
        }
    }
    cout<<man_of_match+1<<endl;
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