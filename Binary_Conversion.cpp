#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n,k;
    cin>>n>>k;
    string s,t;cin>>s>>t;
    int unmatched=0;
    for(int i=0;i<n;i++){
       if(s[i]!=t[i])unmatched++;
    }
    if(n==2 && s!=t && k%2==0 || n==2 && s==t && (s!="00" && s!="11")&& k%2!=0 ){
        cout<<"NO"<<endl;return;
    }
    unmatched/=2;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t && unmatched<=k)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}