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
    map<int,int>m_data;
    for(int i=0;i<n;i++){
       int x;cin>>x;
       m_data[x]++;
    }
    if(m_data.size()>2)cout<<"No"<<endl;
    else if(m_data.size()==2){
        vector<ll>diff;
        for(auto it:m_data){
            diff.push_back(it.second);
        }
        int dif = abs(diff[0]-diff[1]);
        if(dif>1)cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }else cout<<"Yes"<<endl;
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