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
    vector<ll>d_array(n+1);
    for(int i=1;i<=n;i++){
       cin>>d_array[i];
    }
    for(int i=1;i<n;i++){
       if(d_array[i]>d_array[i+1]){
            if(i!=1 && i!=2 && i!=4 && i!=8 && i!=16){
                cout<<"NO"<<endl;return;
            }
       }
    }
    cout<<"YES"<<endl;
}
int main() {
    Faster;
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}