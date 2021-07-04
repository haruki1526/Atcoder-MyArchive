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
    ll n,k;
    ll tei;
    cin >>n>>k;
    vector<ll> a;
    vector<ll> forans;
    ll dum;
    FOR(i,0,n){
        cin >> dum;
        a.push_back(dum);
        forans.push_back(dum);
    }
    sort(ALL(a));
    map<ll,ll> m;
    FOR(i,0,n){
        m[a[i]] = i+1;
    }
    tei = k/n;
    ll sainin = k%n;


    for(auto num:forans){
        if(sainin<m[num]){
            cout << tei<<endl;
        }
        else{
            cout << tei+1<<endl;
        }
        
    }


}
