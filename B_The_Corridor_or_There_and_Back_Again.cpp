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
    ll n;
    cin>>n;
    ll s_i[201]={0};
    for(int i=1;i<=n;i++){
        ll d,s;cin>>d>>s;
        if(s_i[d]>0){
            if(s<s_i[d])s_i[d]=s;
        }else{
            s_i[d]=s;
        }
    }
    ll min_travel=1e9,travel=0;
    for(int i=1;i<=200;i++){
        if(min_travel==i){
            min_travel=i;break;
        }
       if(s_i[i]>0){
        travel=s_i[i]-1;
        if(min_travel>travel){
            min_travel=(travel/2)+i;
        }
       }
    }
    cout<<min_travel<<endl;
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