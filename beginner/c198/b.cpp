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
    string n;
    cin >> n;
    int sizen=n.size();
    reverse(ALL(n));




    FOR(i,0,22-sizen){

        string rn(n);
        reverse(ALL(rn));
        
        
        if(rn==n){
            cout <<"Yes"<<endl;
            return 0;
        }
        n.push_back('0');

    }
    cout <<"No"<<endl;



    

}
