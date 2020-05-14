#include <iostream>
 
using namespace std;
 
int n,k,sum=0,sum2=0;
 
 
main(){
 
    cin>>n;
    int p[n];
    int l[n];
    for(int i=1;i<n;i++){
        l[i]=0;
    }
    l[0]=1;
    for(int i=0;i<n;i++){
        cin>>k;
        sum+=k;
        p[i]=k;
    }
    sum2=p[0];
    k=1;
    for(int i=1;i<n;i++){
        if(sum2<sum/2+1){
            if(p[0]>=p[i]*2){
                k++;
                sum2+=p[i];
                l[i]=1;
            }
        }else{
            cout<<k<<"\n";
            for(int i=0;i<n;i++){
                if(l[i]==1){
                    cout<<i+1<<" ";
                }
            }
            return 0;
        }
    }
    if(sum2<sum/2+1){
        cout<<0;
    }else{
        cout<<k<<"\n";
            for(int i=0;i<n;i++){
                if(l[i]==1){
                    cout<<i+1<<" ";
                }
            }
    }
 
    return 0;
    }
