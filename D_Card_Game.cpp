#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    int n;
    cin>>n;
    char trump;cin>>trump;
    map<char,priority_queue<int,vector<int>,greater<int>>>cards;
    priority_queue<int,vector<int>,greater<int>>t_cards;
    for(int i=0;i<n*2;i++){
       int x;cin>>x;
       char y;cin>>y;
       if(y==trump){
            t_cards.push(x);
       }else{
            if(y=='C')cards['C'].push(x);
            else if(y=='H')cards['H'].push(x);
            else if(y=='D')cards['D'].push(x);
            else cards['S'].push(x);
       }
       
    }
    list<pair<int,char>>ans;
    for(auto it:cards){
        int f=0;
        if((int)it.second.size()%2){
            f=1;
        }
        while(!it.second.empty()){
            ans.push_back({it.second.top(),it.first});
            it.second.pop();
        }
        if(f){
            if(!t_cards.empty()){
                ans.push_back({t_cards.top(),trump});
                t_cards.pop();
            }else{
                cout<<"IMPOSSIBLE"<<endl;return;
            }
        }
    }
    while(!t_cards.empty()){
        ans.push_back({t_cards.top(),trump});
        t_cards.pop();
    }
    while(!ans.empty()){
        cout<<ans.front().first<<ans.front().second<<" ";
        ans.pop_front();
        cout<<ans.front().first<<ans.front().second<<endl;
        ans.pop_front();
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