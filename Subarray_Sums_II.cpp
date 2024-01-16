#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    long long n,x,ans=0;
    cin>>n>>x;
    vector<long long>d_array;
    for(int i=0;i<n;i++){
       int x;cin>>x;
       d_array.push_back(x);
    }
    long long pre_sum=0;
    map<long long,int>freq;
    freq[pre_sum]=1;
    for(int i=0;i<n;i++){
       pre_sum+=d_array[i];
       ans+=freq[pre_sum-x];
       freq[pre_sum]++;
    }
    cout<<ans<<endl;

}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}