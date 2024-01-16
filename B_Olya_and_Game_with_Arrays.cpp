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
    ll n,mn=1e9+5,ans_min=1e9+5,ans=0;
    cin>>n;
    vector<int>ans_ele;
    while(n--){
        int m;cin>>m;
        set<int>set_data;
        for(int i=0;i<m;i++){
           ll x;cin>>x;
           mn=min(mn,x);
           set_data.insert(x);
        }
        if(*set_data.begin()+1<ans_min)ans_min=*set_data.begin()+1;
        ans+=*set_data.begin()+1;
        cout<<*set_data.begin()+1<<" ";
        set_data.empty();
    }
    // cout<<ans<<" ";
    // ans-=ans_min;
    // ans+=mn;
    // cout<<ans<<endl;

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