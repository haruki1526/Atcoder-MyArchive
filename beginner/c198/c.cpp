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
    double r,x,y;
    cin >> r>>x>>y;
    if(x==0 && y==0){
        cout <<0<<endl;
        return 0;
    }

    double uk = sqrt(x*x+y*y);
    ll i=1;

    while(uk>0){
        if(uk-r*i <= 0.0001){
            if(i==1 && uk<r){
                cout <<2 <<endl;
                

            }else{
                cout <<i<<endl;
            }
            return 0;
        }
        i++;

    }



}
