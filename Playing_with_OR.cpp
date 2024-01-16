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
    ll n,k,total=0;
    cin>>n>>k;
    vector<int>d_array(n);
    for(int i=0;i<n;i++){
       int x;cin>>x;
       if(x&1)d_array[i]=1;
    }
    for(int i=1;i<n;i++){
       d_array[i]+=d_array[i-1];
    }
    int odd,r=k-1;
    for(int i=0;i<=n-k;i++){
        if(i==0){
            odd=(d_array[r]);
        }
        else {
            odd= (d_array[r]-d_array[i-1]);
        }
        if(odd>0)total++;
        r++;
        
    }
    cout<<total<<endl;

}
int main() {
    Faster;
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}