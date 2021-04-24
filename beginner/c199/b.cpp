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
    ll maxa=0;
    ll minb=INF;
    ll n;
    cin >> n;
    ll a,b;
    FOR(i,0,n){
        cin>>a;
        maxa=max(maxa,a);
    }
    FOR(i,0,n){
        cin>>b;
        minb=min(minb,b);
    }
    ll zero=0;
    cout<<max(minb-maxa+1,zero)<<endl;

}
