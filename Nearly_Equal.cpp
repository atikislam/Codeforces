#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n,m;
    cin>>n>>m;
    string a,b;cin>>a>>b;
    int ans=100;
    vector<string>conti_s;
    for(int i=0;i<=n-m;i++){
        string s="";
        for(int j=i;j<i+m;j++){
           s+=a[j];
        }
        conti_s.push_back(s);
    }
    int max_match=0;
    for(auto it:conti_s){
        int temp=0;
        for(int i=0;i<m;i++){
            if(it[i]==b[i]){
                temp++;
            }
        }
        max_match=max(max_match,temp);
    }
    cout<<m-max_match<<endl;
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