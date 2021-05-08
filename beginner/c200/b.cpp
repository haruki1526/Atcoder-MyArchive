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
    FOR(i,0,k){
        if(n%200==0){
            n=n/200;
        }else{
            n=n*1000+200;
        }

        
    }
    cout <<n<<endl;

    

}
