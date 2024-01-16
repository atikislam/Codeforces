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
    string s,large_check,ans="";cin>>s;
    int s_size = s.size();
    for(int i=s_size-1;i>0;i--){
        int sum =(s[i-1]-'0')+(s[i]-'0');
        if(sum>9){
            int last_val=(s[i]-'0')+(s[i-1]-'0')-10;
            s[i]=(char)last_val+'0';
            s[i-1]='1';
            cout<<s<<endl;return;
        }
    }
    cout<<(s[0]-'0')+(s[1]-'0');
    areverse(s);
    s.pop_back();
    s.pop_back();
    areverse(s);
    cout<<s<<endl;
    
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