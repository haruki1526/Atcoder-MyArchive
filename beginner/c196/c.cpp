#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<map>
#include<string>

#define ALL(x) (x).begin(), (x).end()
#define FOR(i,begin,end) for(int i=(begin);i<(end);i++)

#define INF 1000000000000000000

using namespace std;
typedef long long ll;


int main(){
    ll n;
    cin >>n;

    ll i= 1;
    while(1){
        if(n<stoll(to_string(i)+to_string(i))){
            cout << i-1<<endl;
            return 0;
        }
        i++;
    }

    

}
