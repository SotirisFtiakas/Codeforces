                          /* THIS IS THE CORRECT SOLUTION CODE. SOLUTION IS ACCEPTED */

#include <iostream>
 
using namespace std;
 
main(){
 
    string k;
    long long ws=0,len,comb=0,ans=0;
 
    cin>>k;
    len=k.length();
    if(len<5){
        cout<<0;
        return 0;
    }
 
    for(int i=1;i<len;i++){
        if (k.at(i) == 'v' && k.at(i-1) == 'v') {
            ws++;
            ans += comb;
        } else if (k.at(i) == 'o') {
            comb += ws;
        }
    }
 
    cout<<ans;
    return 0;
}

                        /* THIS IS THE OLD FALSE CODE. HERE THE TIME LIMIT IS EXCEEDED. */ 

/*
#include <iostream>
 
using namespace std;
 
string k;
unsigned long i1,i3,i4,i=0;
long ans=0;
bool cond;


main(){

    cin>>k;
    if(k.length()<5){
        cout<<0;
        return 0;
    }
    i1=0;
    while(i<k.length()-4){
        i3=i1+2;
        i4=i1+3;
        while(i1<k.length()-4 && k.at(i1)=='v'){
            cond=false;
            while(i1+1<k.length()-3 && k.at(i1+1)=='v' && !cond){
                while(i3<k.length()-2 && k.at(i3)=='o'){
                    if(i4>=k.length()-1){
                        i4=i3+1;
                    }
                    while(i4<k.length()-1 && k.at(i4)=='v'){
                        if(i4+1<k.length() && k.at(i4+1)=='v'){
                            ans++;
                            i4++;
                        }else{
                            i4+=2;
                        }
                    }
                    if(i4>=k.length()-1){
                        i3++;
                        i4++;
                    }else{
                        i4++;
                    }
                }
                if(i3<k.length()-2){
                    i3++;
                    i4++;
                }else{
                    cond=true;
                }
            }
            if(cond){
                i1++;
                i3=i1+2;
                i4=i1+3;
            }else{
                i1+=2;
                i3=i1+2;
                i4=i1+3;
            }
        }
        i1++;
        i++;
    }
    cout<<ans;
    return 0;
}
*/
