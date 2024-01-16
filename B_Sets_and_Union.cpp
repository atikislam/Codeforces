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
    ll n,total_uniq_d=0,ans=0;
    cin>>n;
    set<char>t_uniq_data;
    vector<string>d_array;
    for(int i=0;i<=n;i++){
       string x,s="";
       getline(cin,x);
       for(int j=0;j<(int)x.size();j++){
          if(x[j]!=' '){
            s+=x[j];
            t_uniq_data.insert(x[j]);
          }
       }
       d_array.push_back(s);
    }
    int mxS=0,ii=0;
    for(int i=0;i<(int)d_array.size();i++){
        int single_size=d_array[i].size();
       if(single_size>mxS){
            mxS=single_size;
            ii=i;
       }
    }
    total_uniq_d=t_uniq_data.size();
    for(int i=0;i<d_array.size();i++){
        set<char>temp;
        for(int k=0;k<d_array[ii].size();k++){
           temp.insert(d_array[ii][k]);
        }
        if(d_array[i]!=d_array[ii]){
            for(int j=0;j<d_array[i].size();j++){
                temp.insert(d_array[i][j]);
            }
        }
       ll temp_s = temp.size();
       if(temp_s<total_uniq_d)ans=temp_s;
    }
    cout<<ans<<endl;
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