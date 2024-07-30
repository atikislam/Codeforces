#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
bool cmp(pair<int,int>a,pair<int,int>b){
    if(a.second<b.second) return true;
    else return false;
}
void solve(){
    int n,p;
    cin>>n>>p;
    long long ans=p;
    vector<pair<int,int>>residents(n);
    for(int i=0;i<n;i++){
        cin>>residents[i].first;
    }
    for(int i=0;i<n;i++){
        cin>>residents[i].second;
    }
    sort(residents.begin(),residents.end(),cmp);
    int i=0,end=1;
    long long next_cost;
    while(i<n && end<n && residents[i].second<p){
        next_cost=(long long)residents[i].second*min(residents[i].first,n-end);
        ans+=next_cost;
        end+=residents[i].first;
        i++;
    }
    if(n-end>0)ans+=(long long)p*(n-end);
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