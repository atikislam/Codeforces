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
    ll n,x,f=0;
    cin>>n>>x;
    vector<pair<int,int>>a_array;
    for(int i=0;i<n;i++){
       int x;cin>>x;
       a_array.push_back({x,i});
    }
    asort(a_array);
    vector<int>b_array;
    for(int i=0;i<n;i++){
       int x;cin>>x;
       b_array.push_back(x);
    }
    asort(b_array);
    for(int i=0;i<n;i++){
       if(a_array[i].first>b_array[i] && i!=a_array[i].second){
            f++;
            swap(b_array[i],b_array[a_array[i].second]);
            if(f==x)break;
       }
    }
    if(f!=x)cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
           cout<<b_array[i]<<" ";
        }
        cout<<endl;
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