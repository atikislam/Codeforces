#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    int n;
    cin>>n;
    vector<string>d_array;
    for(int i=0;i<n;i++){
       string s;cin>>s;
       d_array.push_back(s);
    }
    int x=0,y=0;
    for(int i=0;i<n;i++){
        x=0;
       for(int j=0;j<n;j++){
           if(d_array[i][j]=='1'){
            x=1;break;
           }
       }
    }
    for(int i=0;i<n;i++){
        y=0;
       for(int j=0;j<n;j++){
           if(d_array[j][i]=='1'){
            y=1;break;
           }
       }
    }
    if(x & y)cout<<"SQUARE"<<endl;
    else cout<<"TRIANGLE"<<endl;

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