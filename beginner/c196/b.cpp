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
    string x;
    cin >>x;
    string ans;

    for(auto c:x){
        if(c=='.') break;
        ans.push_back(c);

    }



    cout <<ans<<endl;

}
