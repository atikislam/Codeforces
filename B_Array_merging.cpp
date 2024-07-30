#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n;
    cin>>n;
    vector<int>arry_a(n+1),arry_b(n+1);
    for(int i=0;i<n;i++){
       cin>>arry_a[i];
    }
    for(int i=0;i<n;i++){
       cin>>arry_b[i];
    }
    int a_i=0,cnt=1;
    map<int,int>count_a,count_b;
    while(a_i<n){
        if(arry_a[a_i]!=arry_a[a_i+1]){
            if(count_a[arry_a[a_i]]<cnt)count_a[arry_a[a_i]]=cnt;
            cnt=1;
        }else{
           cnt++; 
        }
        a_i++;
    }
    int b_i=0;cnt=1;
    while(b_i<n){
        if(arry_b[b_i]!=arry_b[b_i+1]){
            if(count_b[arry_b[b_i]]<cnt)count_b[arry_b[b_i]]=cnt;
            cnt=1;
        }else{
           cnt++; 
        }
        b_i++;
    }
    int ans=0;
    for(auto it:count_a){
        ans=max(count_b[it.first]+it.second,ans);
    }
    for(auto it:count_b){
        ans=max(count_a[it.first]+it.second,ans);
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