#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;
typedef long long ll;


int main(){
  ll n;
  cin >>n;
  vector<ll> sum(n);
  vector<ll> a(n);
  vector<ll> b(n);

  
  ll numa=0;
  ll numb=0;
  ll ansa=10000001;
  ll ansb=10000001;
  ll olda;
  ll oldb;


  for(ll i=0;i<n;i++){
    cin >> a[i]>>b[i];

    sum[i] = a[i]+b[i];

    if(a[i]<ansa){
      numa=i+1;
      olda = ansa;
      ansa=a[i];
      

    }
    
    if(b[i]<ansb){
      numb=i+1;
      oldb=ansb;
      ansb=b[i];
    }
    if(i==0){
      olda=ansa;
      oldb=ansb;
    }
  }
  ll ans;
  ll ans1;
  ll ans2;
  if(numb==numa){
    ans1 = min(max(ansa,oldb), max(ansb,olda));
    ans = min(ansa+ansb,ans1);

    cout << ans<<endl;
    return 0;

  }
  else ans = max(ansb,ansa);

  for(auto v : sum) if(v<ans) ans=v;

  cout << ans <<endl;
}
