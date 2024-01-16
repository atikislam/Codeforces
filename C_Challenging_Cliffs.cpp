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
    ll n,first=0,last=0;
    cin>>n;
    vector<int>d_array;
    for(int i=0;i<n;i++){
       int x;cin>>x;
       d_array.push_back(x);
    }
    int mn=1e9+7,mn_index=0;
    asort(d_array);
    if(n<3){
        cout<<d_array[0]<<" "<<d_array[1]<<endl;
        return;
    }
    for(int i=1;i<n;i++){
       if(d_array[i]-d_array[i-1]<mn){
            mn=d_array[i]-d_array[i-1];
            mn_index=i;
       }
    }
    for(int i=mn_index;i<n;i++){
       cout<<d_array[i]<<" ";
    }
    for(int i=0;i<mn_index;i++){
       cout<<d_array[i]<<" ";
    }cout<<endl;
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