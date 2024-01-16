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
bool v_check(char x){
    if(x=='A' || x=='E' || x=='I' || x=='O' || x=='U'){
        return true;
    }else return false;
}
void solve(){
    string s;cin>>s;
    if(!v_check(s[0]) && v_check(s[1]) && !v_check(s[2]) && v_check(s[3]) && !v_check(s[4]) && v_check(s[5]) && !v_check(s[6]) && !v_check(s[7])){
        cout<<"YES"<<endl;
    }else cout<<"NO"<<endl;

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