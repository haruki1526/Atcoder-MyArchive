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

    ll a,b,c;

    cin >>a>>b>>c;

    ll flag;
    if(c%2==0){
        flag=-1;
    }else{
        flag=1;
    }


    if(a==b){
        cout << "="<<endl;
        return 0;
    }else if(a<0){
        a=a*flag;
    }else if(b<0){
        b=b*flag;
    }else if(a<0&&b<0){
        a=a*flag;
        b=b*flag;
        

    }

    if(a<b) cout << "<"<<endl;
    else if(a>b) cout << ">"<<endl;
    else if(a==b) cout << "="<<endl;

    
    


}
