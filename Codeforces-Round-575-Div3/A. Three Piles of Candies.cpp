#include <iostream>
 
using namespace std;
 
int n;
long long k1,k2,k3;
long long p[1000];
 
main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>k1>>k2>>k3;
        p[i]=(k1+k2+k3)/2;
    }
 
    for(int i=0;i<n;i++){
        cout<<p[i]<<"\n";
    }
 
    return 0;
}
