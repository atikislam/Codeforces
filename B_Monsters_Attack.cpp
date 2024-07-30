#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
bool cmp(pair<int,int> x,pair<int,int> y){
    return (x.second<y.second);
}
void solve(){
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>>a_array(n);
    for(int i=0;i<n;i++)cin>>a_array[i].first;
    for(int i=0;i<n;i++){
       int x;cin>>x;
       if(x<0)x*=-1;
       a_array[i].second=x;
    }
    sort(a_array.begin(),a_array.end(),cmp);
    long long helth=0;
    for(int i=0;i<n;i++){
        helth+=a_array[i].first;
        long long bullet=(1LL*a_array[i].second*k);
       if(helth>bullet){
        cout<<"NO"<<endl;return;
       }
    }
    cout<<"YES"<<endl;
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