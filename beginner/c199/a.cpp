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
    ll a,b,c;
    cin >>a>>b>>c;
    if(a*a+b*b<c*c){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }

}
