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
    string s;cin>>s;
    int check_case;
    if(isupper(s[0])){
        check_case=1;
    }else{
        check_case=0;
    }

    vector<int>upper_case,lower_case;
    for(int i=0;i<(int)s.size();i++){
       if(isupper(s[i]) && s[i]!='B'){
            upper_case.push_back(i);
        }else if(isupper(s[i])){
            if((int)upper_case.size()>0){
                int x=upper_case[(int)upper_case.size()-1];
                s[x]='0';
                upper_case.pop_back();
            }
            s[i]='0';
        }

        if(islower(s[i]) && s[i]!='b'){
            lower_case.push_back(i);
        }else if(islower(s[i])){
            if((int)lower_case.size()>0){
                int x=lower_case[(int)lower_case.size()-1];
                s[x]='0';
                lower_case.pop_back();
            }
            s[i]='0';
        }
    }
    
    for(int i=0;i<(int)s.size();i++){
       if(s[i]!='0'){
            cout<<s[i];
        }
    }cout<<endl;

}
int main() {
    Faster;
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}