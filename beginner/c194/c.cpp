#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<map>

#define ALL(x) (x).begin(), (x)end()
#define FOR(i,begin,end) for(int i=(begin);i<(end);i++)

using namespace std;
typedef long long ll;


int main(){
  ll n;
  cin >>n;
  vector<ll> a(n);
  map<int,int> m;

  FOR(i,0,n){
    cin >>a[i];
    m[a[i]]++;
  }
  ll ans=0;
  FOR(i,-199,201){
    FOR(j,-200,i) ans += pow(i-j,2)*m[i]*m[j];

  }
    
  cout << ans<<endl;

}
