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
    ll n,target,cost=0;
    cin>>n;
    vector<ll>length;
    for(int i=0;i<n;i++){
       int x;cin>>x;
       length.push_back(x);
    }
    asort(length);
    int mid=n/2;
    target=length[mid];
    for(int i=0;i<n;i++){
       cost+=abs(length[i]-target);
    }
    cout<<cost<<endl;
}
int main() {
    Faster;
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}