#include <iostream>
 
using namespace std;
 
int x;

int main()
{
    cin>>x;
    
    if(x%4==0)
    {
        cout<<1<<" "<<'A';
    }
    else if(x%4==1){
        cout<<0<<" "<<'A';
    }
    else if(x%4==2){
        cout<<1<<" "<<'B';
    }
    else {
        cout<<2<<" "<<'A';
    }
 
    return 0;
}
