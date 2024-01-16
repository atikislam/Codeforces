#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define endl "\n"
#define abc "abcdefghijklmnopqrstuvwxyz"
#define asort(a) sort(a.begin(),a.end())
#define gsort(a) sort(a.begin(),a.end(),greater<int>())
#define issort(a) is_sorted(a.begin(),a.end())
#define areverse(a) reverse(a.begin(),a.end())
#define Faster ios_base::sync_with_stdio(false); cin.tie(NULL);
// default define end


void solve(){
    multiset<int>left,right;
    int n;cin>>n;
    while(n--){
        char operation;cin>>operation;
        int l,r;cin>>l>>r;
        if(operation=='+'){
            left.insert(l);
            right.insert(r);
        }else{
            left.erase(left.find(l));
            right.erase(right.find(r));
        }
        if(left.empty()){
            cout<<"NO"<<endl;continue;
        }
        int left_last = *--left.end();
        int right_front = *right.begin();
        if(right_front<left_last){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
         
    }
}
int main() {
    Faster;
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}