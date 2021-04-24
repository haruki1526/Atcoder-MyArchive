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
    ll n,q;
    string s;
    cin>>n>>s>>q;
    ll t,a,b;
    string subh,subf;
    char duma,dumb;
    int swap=0;
    FOR(i,0,q){
        cin>>t>>a>>b;
        a--;
        b--;
        if(t==1){
            if(swap%2==1){
                if(a<n && b<n){
                    a=a+n;
                    b=b+n;
                }else if(a>=n && b>=n){
                    a=a-n;
                    b=b-n;
                }else if(a>=n && b<n){
                    a=a-n;
                    b=b+n;
                }else{
                    a=a+n;
                    b=b-n;

                }

                duma=s[a];
                dumb=s[b];
                s[b]=duma;
                s[a]=dumb;
                

            }else{
                duma=s[a];
                dumb=s[b];
                s[b]=duma;
                s[a]=dumb;

            }

        
        }else{
            swap++;


        }
    }
    if(swap%2==1){
        subh = s.substr(n,n);
        subf = s.substr(0,n);
        s = subh+subf;

    }
    cout << s<<endl;

}
