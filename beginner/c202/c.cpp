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

    map<ll,ll> m;
    ll n;
    ll a,c,sum=0;
    cin >>n;
    vector<ll> b(n);



    FOR(i,0,n){
        cin >>a;
        m[a]++;
    }
    FOR(i,0,n){
        cin >>b[i];
    }
    FOR(i,0,n){
        cin >> c;
        sum+=m[b[c-1]];
        
    }
    cout <<sum<<endl;


}
