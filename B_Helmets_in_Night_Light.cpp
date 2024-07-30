#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
bool cmp(pair<int,int>a,pair<int,int>b){
    return a.first<b.first;
}
void solve(){
    int n,p;
    cin>>n>>p;
    vector<pair<int,int>>array_ab;
    for(int i=0;i<n;i++){
       int x;cin>>x;
       array_ab.push_back({0,x});
    }
    for(int i=0;i<n;i++){
       cin>>array_ab[i].first;
    }
    sort(array_ab.begin(),array_ab.end(),cmp);
    long long ans=p;
    int l=0,r=n-1;
    while(l<=n and r>=0){
        if(array_ab[l].first>p){
            ans+=(long long)r*p;
            break;
        }else{
            int mn=min(array_ab[l].second,r);
            ans+=(long long)array_ab[l].first*mn;
            r-=mn;
        }
        l++;
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