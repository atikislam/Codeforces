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
    int n,ans=1,mx_value=0;
    cin>>n;
    vector<int>integers;
    for(int i=0;i<n;i++){
       int x;cin>>x;
       if(x>mx_value)mx_value=x;
       integers.push_back(x);
    }
    for(int i=2;i<=mx_value;i++){
       int count =0;
       for(int j=i;j<n;j+=i){
        if(integers[j]%i==0)count++;
       }
       if(count>1)ans=max(ans,i);
    }
    cout<<ans<<endl;
}
int main() {
    Faster;
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}