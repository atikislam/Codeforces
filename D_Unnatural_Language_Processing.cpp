#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n,v=0,c=0;
    cin>>n;
    string s;cin>>s;
    int total=0;
    for(int i=0;i<n-1;i++){
       if(s[i]=='a' || s[i]=='e'){
        cout<<s[i]<<s[i+1]<<".";i++;
       }else if(s[i+1]=='a' || s[i+1]=='e'){
            cout<<s[i]<<s[i+1];i++;
            if(s[i+1]!='a' ||s[i+1]!='e'){
                cout<<s[i+1];i++;
            }
            cout<<"."; 
       }
    }cout<<endl;
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