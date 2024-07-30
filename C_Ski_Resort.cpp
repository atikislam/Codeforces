#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n,k,q;
    cin>>n>>k>>q;
    long long ans=0;
    vector<int>temp(n),possi_days;
    for(int i=0;i<n;i++){
       cin>>temp[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
       if(temp[i]<=q)count++;
       else{
        if(count>0)possi_days.push_back(count);
        count=0;
       }
    }
    if(count>0)possi_days.push_back(count);
    for(int i=0;i<(int)possi_days.size();i++){
        if(possi_days[i]>=k){
            ans+=((long long)(possi_days[i]-k+1)*(possi_days[i]-k+2))/2;
        }
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