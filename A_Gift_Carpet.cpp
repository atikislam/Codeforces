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
    ll n,m;
    cin>>n>>m;
    vector<string>s;
    for(int j=0;j<n;j++){
       string ss;cin>>ss;
       s.push_back(ss);
    }
    string name ="vika";
    ll count=0;
    for(int i=0;i<m;i++){
       for(int j=0;j<n;j++){
         char check =s[j][i];
         if(check==name[count]){
            count++;
            break;
         }
       }
    }
     if(count>3)cout<<"YES"<<endl;
     else cout<<"NO"<<endl;

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