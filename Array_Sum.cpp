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
    ll n,k,single_e,ans;
    cin>>n>>k;
    vector<ll>d_array;
    
    if(k<n*2)cout<<-1<<endl;
    else{
        single_e=k/n;
        ans=k;
        for(int i=0;i<n-2;i++){
            if(i&1){
                d_array.push_back(single_e);
                ans-=single_e;
            }
            else {
                d_array.push_back(single_e-1);
                ans-=single_e-1;
            }
        }
        if(ans&1){
            ans++;
            ans/=2;
            cout<<ans<<" "<<ans-1<<" ";
            for(int i=0;i<d_array.size();i++){
               cout<<d_array[i]<<" ";
            }
            cout<<endl;
        }else{
            cout<<-1<<endl;
        }
        
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