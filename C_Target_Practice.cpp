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
#define rsort(a) sort(a.rbegin(),a.rend())
#define gsort(a) sort(a.begin(),a.end(),greater<int>())
#define issort(a) is_sorted(a.begin(),a.end())
#define areverse(a) reverse(a.begin(),a.end())
#define Faster ios_base::sync_with_stdio(false); cin.tie(NULL);
// default define end
void solve(){
    ll ans=0;
    char d[11][11];
    for(int i=1;i<=10;i++){
       for(int j=1;j<=10;j++){
           cin>>d[i][j];
       }
    }
    for(int i=1;i<=10;i++){
       for(int j=1;j<=10;j++){
           if(d[i][j]=='X'){
            if(i==1 || i==10 || j==1 || j==10)ans+=1;
            else if(i==2 || i==9 || j==2 || j==9)ans+=2;
            else if(i==3 || i==8 || j==3 || j==8)ans+=3;
            else if(i==4 || i==7 || j==4 || j==7)ans+=4;
            else if(i==5 || i==6 || j==5 || j==6)ans+=5;
           }
       }
    }
    cout<<ans<<endl;
    
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