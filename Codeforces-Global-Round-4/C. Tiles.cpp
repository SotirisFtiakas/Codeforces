#include <iostream>

using namespace std;

long w,h,ans=1;

main(){

    cin>>w>>h;
    if(h==0){
        cout<<0;
        return 0;
    }
    for(int i=0;i<w+h;i++){
        ans=ans*2%998244353;
    }
    cout<<ans;
    return 0;
}
