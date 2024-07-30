#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(){
    long long n,k,b,s;
    cin>>n>>k>>b>>s;
    long long max_end=min(s,(k*b)+(k-1));
    if((k*b)>s || s-max_end>((n-1)*(k-1))){
        cout<<-1<<endl;
    }else{
        s-=max_end;
        cout<<max_end<<" ";
        int cnt=0;
        while(s>k-1){
            cout<<k-1<<" ";
            s-=k-1;
            cnt++;
        }
        if(s>0){
            cout<<s<<" ";
            cnt++;
        }
        for(int i=cnt;i<n-1;i++){
           cout<<"0 ";
        }cout<<endl;
    }
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