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
void primeFactor(int x){

}
void solve(){
    ll n;
    cin>>n;
    map<int,int>m_data;
    for(int i=0;i<n;i++){
       ll x;cin>>x;
       for(int j=2;j*j<=x;j++){
        if(x%j==0){
            while(x%j==0){
                m_data[j]++;
                x/=j;
            }
        }
       }
       if(x>1)m_data[x]++;
    }
    for(auto i:m_data){
        if(i.second%n){
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