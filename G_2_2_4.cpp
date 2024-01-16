#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define endl "\n"
#define INF 100000000
#define abc "abcdefghijklmnopqrstuvwxyz"
#define ABC "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define PI 3.1415926535897932384626433832795
//define sort function
#define asort(a) sort(a.begin(),a.end())
#define gsort(a) sort(a.begin(),a.end(),greater<int>())
#define issort(a) is_sorted(a.begin(),a.end())
#define areverse(a) reverse(a.begin(),a.end())
#define Faster ios_base::sync_with_stdio(false); cin.tie(NULL);
// default define end
void solve(){
    ll n,x;
    cin>>n>>x;
    vector<ll>d_array,ans_data;
    for(int i=0;i<n;i++){
       ll x;cin>>x;
       d_array.push_back(x);
       ans_data.push_back(x);
    }
    asort(ans_data);
    ll l=0,r=n-1;
    while(l<r){
        if(ans_data[l]+ans_data[r]>x)r--;
        else if(ans_data[l]+ans_data[r]<x)l++;
        else{
            int f=0;
            for(int i=0;i<n && f<2;i++){
               if(ans_data[l]==d_array[i] || ans_data[r]==d_array[i]){
                cout<<i+1<<" ";
                f++;
               }
            }
            return;
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
}
int main() {
    Faster;
    ll t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}