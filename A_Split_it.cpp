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
    ll n,k;
    cin>>n>>k;
    string s,left="",right="";cin>>s;
    
    for(int i=0;i<k;i++){
       left+=s[i];
    }
    for(int i=k+1; i<n;i++){
       right+=s[i];
    }
    areverse(right);
    for(int i=0;i<k;i++){
       if(left[i]!=right[i] || (int)left.size()>(int)right.size()){
        cout<<"NO"<<endl;return;
       }
    }
    cout<<"YES"<<endl;

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