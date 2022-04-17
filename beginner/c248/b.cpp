#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

#define ALL(x) (x).begin(), (x).end()
#define FOR(i,begin,end) for(int i=(begin);i<(end);i++)

#define INF 1000000000000000000

using namespace std;
typedef long long ll;


int main(){

  ll a,b,k;
  
  cin >> a>>b>>k;

  ll ans=0;
  while(a<b){
    a=a*k;
    ans++;
  }
  cout <<ans<<endl;
  


}
