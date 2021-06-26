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
    cin >>n;
    vector<vector<double>> a(n);


    ll t,l,r;
    FOR(i,0,n){
        cin >>t>>l>>r;
        if(t==1){
            a[i].push_back(l);
            a[i].push_back(r);
        }else if(t==2){
            a[i].push_back(l);
            a[i].push_back(r-0.1);
        }else if(t==3){
            a[i].push_back(l+0.1);
            a[i].push_back(r);
        }else{

            a[i].push_back(l+0.1);
            a[i].push_back(r-0.1);
        }
    }
    ll ans=0;

    FOR(i,0,n-1){
        FOR(j,i+1,n){
            if(a[i][0]<=a[j][1] && a[i][1]>=a[j][0]){
                ans++;
            }
        }
    }
    cout <<ans<<endl;
    


}
