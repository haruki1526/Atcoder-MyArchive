#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<map>

#define ALL(x) (x).begin(), (x).end()
#define FOR(i,begin,end) for(int i=(begin);i<(end);i++)

#define INF 1000000000000000000

using namespace std;
typedef long long ll;


int main(){
    ll n;
    cin >>n;
    vector<ll> a(n);
    ll dum;
    map<ll,ll> m;
    FOR(i,0,n){
        cin >> dum;

        m[dum%200]++;
    }
    ll ans=0;
    FOR(i,0,200){
        ans+=(((m[i]-1)+1)*(m[i]-1))/2;
        
    }
    cout << ans<<endl;

}
