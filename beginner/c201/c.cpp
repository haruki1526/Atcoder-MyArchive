#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<map>

#define all(x) (x).begin(), (x).end()
#define FOR(i,begin,end) for(int i=(begin);i<(end);i++)

#define inf 1000000000000000000

using namespace std;
typedef long long ll;


int main(){
    string s;
    cin >> s;
    ll ans=0;

    FOR(i,0,10000){
        ll u = i;
        vector<bool> flag(10);
        FOR(j,0,4){
            flag[u%10]=true;
            u = u/10;
        }
        bool f=true;
        FOR(j,0,10){
            if(flag[j] && s[j]=='x') f=false;
            if(!flag[j] && s[j]=='o') f=false;

        }
        if(f) ans++;

        
    }
    cout << ans<<endl;


}
