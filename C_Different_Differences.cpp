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
    ll k,n,sum=1;
    cin>>k>>n;
    int i=0;
    set<ll>set_data;
    while(k){
        sum+=i;
        if(sum<=n){
            set_data.insert(sum);
        }else{
            break;
        }
        i++;
        k--;
    }
    for(int i=n;i>2 && k;i--){
        int set_size = set_data.size();
        set_data.insert(i);
        int is_insert = set_data.size();
        if(set_size != is_insert)k--;
    }
    for(auto i:set_data){
        cout<<i<<" ";
    }
    cout<<endl;
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