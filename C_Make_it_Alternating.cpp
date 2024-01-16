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
    ll min_op=0,s_s=0,zero=0,one=0;
    string s;
    cin>>s;
    ll s_size=s.size()-1;
    for(int i=0;i<s_size;i++){
       if(s[i]==s[i+1]){
            min_op++;
            for(int j=i+1;j<=s_size;j++){
               if(s[i]==s[j])s_s++;
               else{
                i=j;
                break;
               }
            }
       }
    }
    cout<<min_op<<" ";
    s_s*=2;
    if(s_s==0)cout<<1<<endl;
    else cout<<s_s<<endl;
    
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