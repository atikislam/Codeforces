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
    int n,m,k,ans=0;
    cin>>n>>m>>k;
    vector<int>d_array,m_array;
    for(int i=0;i<n;i++){
       int x;cin>>x;
       d_array.push_back(x);
    }
     for(int i=0;i<m;i++){
       int x;cin>>x;
       m_array.push_back(x);
    }
    asort(d_array);
    asort(m_array);
    int d_cont=0,m_cont=0;
    while(d_cont<n && m_cont<m){
        int diff =abs(d_array[d_cont]-m_array[m_cont]);
        if(diff<=k){
            ans++;
            d_cont++;
            m_cont++;
        }else if(d_array[d_cont]>m_array[m_cont] ){
            m_cont++;
        }else{
            d_cont++;
        }
    }
    cout<<ans<<endl;

}
int main() {
    Faster;
    ll t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}