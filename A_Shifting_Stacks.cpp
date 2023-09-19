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
#define rsort(a) sort(a.rbegin(),a.rend())
#define gsort(a) sort(a.begin(),a.end(),greater<int>())
#define issort(a) is_sorted(a.begin(),a.end())
#define areverse(a) reverse(a.begin(),a.end())
#define Faster ios_base::sync_with_stdio(false); cin.tie(NULL);
// default define end
void solve(){
    ll n,temp;
    cin>>n;
    vector<ll>d_array(n+1,0);
    for(int i=0;i<n;i++){
       ll x;cin>>x;
       ll final_value=x+d_array[i];
       if(final_value>i){
        temp=final_value-i;
        d_array[i+1]+=temp;
        x-=temp;
       }
       d_array[i]+=x;
    }

    for(int i=0;i<n-1;i++){
       if(d_array[i]>=d_array[i+1]){
        cout<<"NO"<<endl;return;
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