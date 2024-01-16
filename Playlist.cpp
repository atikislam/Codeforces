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
    int n,ans=0;cin>>n;
    vector<int>songs;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        songs.push_back(x);
    }
    int check_size;
    set<int>check;
    for(int i=0;i<n;i++){
        if(check.count(songs[i])){
            int rm = 0;
            check.erase(songs[rm]);
            rm++;
        }
        check.insert(songs[i]);
        check_size=check.size();
        ans=max(ans,check_size);
    }
    cout<<ans<<endl;

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
