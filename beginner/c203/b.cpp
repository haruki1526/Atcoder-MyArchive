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
    ll ans=0;
    ll n,k;

    cin >> n>>k;
    ans = (((n+1)*n)/2)*100*k + n*((k+1)*k)/2;
    cout <<ans<<endl;


    


}
