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
    cin >>n>>k;
    ll a,b;
    ll gen=0;
    vector<vector<ll>> ab(n);
    FOR(i,0,n){
        cin >> a>>b;

        ab[i].push_back(a);
        ab[i].push_back(b);



    }

    sort(ALL(ab));

    
    FOR(i,0,ab.size()){
        k=k-(ab[i][0]-gen);
        if(k>=0){
            gen=ab[i][0];
            k+=ab[i][1];
        }else{

            cout << gen+k+(ab[i][0]-gen)<<endl;
            return 0;
        }

    }
    cout << gen+k<<endl;

}
