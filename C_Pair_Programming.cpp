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
    //string s;cin>>s;
    ll k,n,m,zero=0;
    cin>>k>>n>>m;
    vector<int>a_array;
    for(int i=0;i<n;i++){
       int x;cin>>x;
       a_array.push_back(x);
    }
    vector<int>b_array;
    for(int i=0;i<m;i++){
       int x;cin>>x;
       b_array.push_back(x);
    }
    vector<int>res;
    int a=0,b=0;
    while(a<n || b<m){
        if(a<n && a_array[a]<=k){
            res.push_back(a_array[a]);
            if(a_array[a]==0)k++;
            a++;
        }else if(b<m && b_array[b]<=k ){
            res.push_back(b_array[b]);
            if(b_array[b]==0)k++;
            b++;
        }else{
            cout<<-1<<endl;return;
        }
    }
    for(auto it:res){
        cout<<it<<" ";
    }cout<<endl;
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