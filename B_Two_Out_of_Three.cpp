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
    ll n,one=0,two=0,three=0;
    cin>>n;
    vector<int>d_array;
    set<int>set_data;
    for(int i=0;i<n;i++){
       int x;cin>>x;
       d_array.push_back(x);
       set_data.insert(x);
    }
    int s_size = set_data.size();
    if(s_size>n-2 || s_size<2)cout<<-1<<endl;
    else{
        int f=1;
        for(int i=0;i<n-1;i++){
           if(d_array[i]==d_array[i+1]){
                if(f){
                    d_array[i]=1;d_array[i+1]=2;
                    f=0;
                    i++;
                }else{
                    d_array[i]=1;d_array[i+1]=3;
                    f=1;
                    i++;
                }
           }
        }
        for(int i=0;i<n;i++){
           cout<<d_array[i]<<" ";
        }cout<<endl;
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