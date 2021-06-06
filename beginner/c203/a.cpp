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
    vector<ll> a(3);
    cin >> a[0]>>a[1]>>a[2];
    sort(ALL(a));
    if(a[0]==a[1]){
        cout << a[2]<<endl;
    }else if(a[1]==a[2]){
        cout << a[0]<<endl;

    }else{
        cout <<0<<endl;
    }


}
