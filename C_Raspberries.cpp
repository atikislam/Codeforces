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
    ll n,k,min_num_to_add=1e9,evn=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
       ll x;cin>>x;
       if(x%k==0)min_num_to_add=0;
       if(!(x&1))evn++;
       min_num_to_add=min(min_num_to_add,k-(x%k));
    }
    if(k==4){
        if(evn>1)min_num_to_add=0;
        else if(evn==1)min_num_to_add=min(min_num_to_add,1LL);
        else min_num_to_add=min(min_num_to_add,2LL);
    }
    cout<<min_num_to_add<<endl;

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