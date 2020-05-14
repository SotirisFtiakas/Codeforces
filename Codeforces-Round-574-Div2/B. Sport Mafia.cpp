#include <iostream>
 
using namespace std;
 
long n,k,c=0,m=0;
bool cond=false;
 
int main()
{
    cin>>n>>k;
    if(n!=1){
        m=n;
    }
    for(long i=1;i<n && !cond;i++){
        c=c+i;
        m--;
        if(c>=k){
            if(c-(m)==k){
                cond=true;
            }
        }
    }
    cout<<m;
 
    return 0;
}
