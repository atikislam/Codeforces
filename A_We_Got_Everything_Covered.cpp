#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n,k;
    cin>>n>>k;
    char ch='a';
    for(int i=0;i<n;i++){
       for(int j=0;j<k;j++){
           cout<<ch;
           ch++;
       }
       ch='a';
    }
    cout<<endl;
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