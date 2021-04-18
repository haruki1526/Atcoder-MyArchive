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
    ll a,b;
    vector<ll> v1;
    vector<ll> v2;

    cin >> a>>b;

    ll def=a-b;

    FOR(i,1,min(a,b)+1){
        v1.push_back(i);
        v2.push_back(-i);
    }
    FOR(i,min(a,b)+1,max(a,b)+1){
        if(a==b){
            break;
        }else if(a>b){
            v2[v2.size()-1] = v2[v2.size()-1] - i;
            v1.push_back(i);
        }else{
            v1[v1.size()-1] = v1[v1.size()-1] + i;
            v2.push_back(-i);
        }
    }
    for(auto n:v1) cout<<n<<" ";
    for(auto n:v2) cout<<n<<" ";

    cout << endl;




}
