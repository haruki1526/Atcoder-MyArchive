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

  string sr = "0123456789";
  
  string s;
  cin >> s;

  sort(s.begin(),s.end());

  FOR(i,0,9){
    if(s[i]!=sr[i]){

      cout << sr[i] <<endl;
      return 0;
    }

  }
  cout << '9' << endl;


  


}
