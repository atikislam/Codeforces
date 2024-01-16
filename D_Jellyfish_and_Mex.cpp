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
    int n,zero=0,mex=-1;
    ll ans=1e9+5;
    cin>>n;
    map<int,int>d_array;
    for(int i=0;i<n;i++){
       ll x;cin>>x;
       if(x==0)zero++;
       if(x<=n)d_array[x]++;
    }
    int cnt=0;
    for(auto i:d_array){
        if(i.first!=cnt){
            mex=cnt;
            break;
        }
        cnt++;
    }
    if(mex<0)mex=cnt;
    for(auto i:d_array){
        int key =i.first;
        int value=i.second;
        ll temp=0,update_mex=min(key,mex);
        if(value>1){
            temp=(value-1)*mex;
            temp+=update_mex;
        }else{
            temp=update_mex;
        }
        if(zero>1){
            temp+=(zero-1)*update_mex;
        }
        //cout<<temp<<" ";
        ans=min(ans,temp);
    }
    if(!mex)cout<<0<<endl;
    else {
        cout<<ans<<endl;
    }
    
    
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