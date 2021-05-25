#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<map>

#define all(x) (x).begin(), (x).end()
#define for(i,begin,end) for(int i=(begin);i<(end);i++)

#define inf 1000000000000000000

using namespace std;
typedef long long ll;


int main(){
    vector<ll> a(3);
    cin >>a[0]>>a[1]>>a[2];
    sort(all(a));
    if(abs(a[0]-a[1])==abs(a[1]-a[2])){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }



}
