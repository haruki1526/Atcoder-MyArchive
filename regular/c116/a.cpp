#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<map>

#define ALL(x) (x).begin(), (x)end()
#define FOR(i,begin,end) for(int i=(begin);i<(end);i++)

#define INF 1000000000000000000

using namespace std;
typedef long long ll;


int main(){
    ll t,ca;
    cin >> t;
    

    FOR(i,0,t){
        cin >> ca;
        if(ca%2==1){
            cout <<"Odd"<<endl;
        }else{
            if((ca/2)%2==1) cout <<"Same"<<endl;
            else cout <<"Even"<<endl;
        }
    }

}
