#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<map>

#define all(x) (x).begin(), (x).end()
#define FOR(i,begin,end) for(int i=(begin);i<(end);i++)

#define inf 1000000000000000000

using namespace std;
typedef long long ll;


int main(){
    string s,max2s,maxs;
    ll t,n,max=0,max2=0;
    
    cin >>n;

    FOR(i,0,n){
        cin >>s>>t;
        if(max<t){
            max2=max;
            max2s = maxs;
            max=t;
            maxs=s;


        }else if(max2<t){
            max2=t;
            max2s=s;
        }

        

    }

    cout << max2s<<endl;



}
