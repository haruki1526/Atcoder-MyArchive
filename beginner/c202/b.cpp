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
    string s;
    string ans;
    cin >>s;
    FOR(i,0,s.size()){
        if(s[i]=='6'){
             s[i]='9';
        }
        else if(s[i]=='9'){
            s[i]='6'; 
        }

        

    }
    reverse(ALL(s));
    
    cout<<s<<endl;

}
