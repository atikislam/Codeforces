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
    vector<int>integers;
    for(int i=0;i<n;i++){
       int x;cin>>x;
       integers.push_back(x);
    }
    asort(integers);
    if(integers[0]==0 && integers[1]==1)cout<<"NO"<<endl;
    else if(integers[0]==1){
        for(int i=0;i<n-1;i++){
           if(integers[i+1]-integers[i]==1){
                cout<<"NO"<<endl;
                return;
           }
        }
        cout<<"YES"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
    

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