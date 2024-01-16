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
    ll n;
    cin>>n;
    vector<int>planks,rotated_planks(n+1,0);
    planks.push_back(0);
    for(int i=0;i<n;i++){
       int x;cin>>x;
       planks.push_back(x);
       if(x<=n) rotated_planks[x]++;
    }
    for(int i=n;i>1;i--){
       rotated_planks[i-1]+=rotated_planks[i];
    }
    if(planks==rotated_planks)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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