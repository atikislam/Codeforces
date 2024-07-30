#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int arr[30];
void solve(){
    int n;
    cin>>n;
    
    while(n--){
        int a,b;cin>>a>>b;
        if(a==1){
            arr[b]++;
        }else{
            for(int i=29;i>=0;i--){
                if(arr[i]){
                    int power=pow(2,i);
                    int avail= b/power;
                    int possible = min(avail,arr[i]);
                    b-=possible*power;
                }
                if(b==0)break;
            }
            if(!b)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}