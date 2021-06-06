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
    int a;
    cin >> n;
    ll sum=0;

    FOR(i,0,n){
        cin >> a;

        sum+=max(a-10,0);

    }
    cout << sum<<endl;



}
