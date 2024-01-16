#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define endl "\n"
#define INF 100000000
#define abc "abcdefghijklmnopqrstuvwxyz"
#define ABC "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define PI 3.1415926535897932384626433832795
//define sort function
#define asort(a) sort(a.begin(),a.end())
#define gsort(a) sort(a.begin(),a.end(),greater<int>())
#define issort(a) is_sorted(a.begin(),a.end())
#define areverse(a) reverse(a.begin(),a.end())
#define Faster ios_base::sync_with_stdio(false); cin.tie(NULL);
// default define end
void solve(){
    ll n,count=5;
    cin>>n;
    ll arry[n+2];
    for(int i=1;i<=n;i++){
        arry[i]=count;
       if(i%3==0){
            if((arry[i]*3)%(arry[i-2]+arry[i-1])==0){
                arry[i]=arry[i-2]+arry[i-1]-2;
                count=arry[i-2]+arry[i-1]-2;
            }
       }
       count++;
    }
    for(int i=1;i<=n;i++){
       cout<<arry[i]<<" ";
    }
    cout<<endl;

}
int main() {
    Faster;
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}