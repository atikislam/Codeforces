#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define endl "\n"
#define abc "abcdefghijklmnopqrstuvwxyz"
#define asort(a) sort(a.begin(),a.end())
#define gsort(a) sort(a.begin(),a.end(),greater<int>())
#define issort(a) is_sorted(a.begin(),a.end())
#define areverse(a) reverse(a.begin(),a.end())
#define Faster ios_base::sync_with_stdio(false); cin.tie(NULL);
// default define end
void solve(){
    ll n,k,mx_op=1;
    cin>>n>>k;
    vector<pair<int,int>>d_array;
    for(int i=0;i<n;i++){
       int x;cin>>x;
       d_array.push_back({x,i});
    }
    asort(d_array);
    for(int i=1;i<n;i++){
       if(d_array[i-1].second+1 != d_array[i].second){
            mx_op++;
       }
    }
    if(mx_op<=k)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
int main() {
    Faster;
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}