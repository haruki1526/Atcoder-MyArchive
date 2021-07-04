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
    ll p;
    cin >>p;
    vector<ll> kai(11);
    kai[0]=1;
    FOR(i,1,11){
        
        kai[i] =kai[i-1]*(i+1);


    }
    
    ll n=10;
    ll c=0;
    while(p){

        if(kai[n]<=p){
            p=p-kai[n];
            
            c++;
        }else{
            n--;
        }

    }
    cout <<c<<endl;

}
