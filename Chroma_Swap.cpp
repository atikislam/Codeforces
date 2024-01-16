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
    ll n;
    cin>>n;
    vector<int>a_array,a_color;
    for(int i=0;i<n;i++){
       int x;cin>>x;
       a_array.push_back(x);
    }
    for(int i=0;i<n;i++){
       int x;cin>>x;
       a_color.push_back(x);
    }
    vector<pair<int,int>>b_array;
    for(int i=0;i<n;i++){
       int x;cin>>x;
       b_array.push_back({0,x});
    }
    for(int i=0;i<n;i++){
       int x;cin>>x;
       b_array[i].first=x;
    }
    asort(b_array);
    for(int i=1;i<n;i++){
       if(a_array[i-1]>a_array[i]){
            b_array[i].first==a_color[i]
       }
    }
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