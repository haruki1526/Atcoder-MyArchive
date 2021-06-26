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
    ll a,b,c,d;

    cin >>a>>b>>c>>d;
    ll n=1;
    if(b>=d*c){
        cout << -1<<endl;
        return 0;

    }

    while(1){
        if(a+b*n<=d*c*n){
            cout <<n<<endl;
            return 0;
        }
        
        n++;



    }

    


}
