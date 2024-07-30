#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    string s;cin>>s;
    int arr[2]={0};
    int n=s.size();
    for(int i=0;i<n;i++){
       arr[s[i]-'0']++;
    }
    for(int i=0;i<n;i++){
       if(arr[!(s[i]-'0')]>0)arr[!(s[i]-'0')]--;
       else{
        cout<<n-i<<endl;return;
       }
    }
    cout<<0<<endl;
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