#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1,s2,s3;
    int a,b,c;
    int l1,l2,l3;

    cin>>s1;
    cin>>s2;
    cin>>s3;

    a=s1.at(0);
    b=s2.at(0);
    c=s3.at(0);

    l1=s1.at(1);
    l2=s2.at(1);
    l3=s3.at(1);

    if(((a==b && b==c)&&(l1==l2 && l2==l3))||
       ((a+1==b && b+1==c)||(a+1==c && c+1==b) ||
        (b+1==c && c+1==a)||(b+1==a && a+1==c) ||
        (c+1==b && b+1==a)||(c+1==a && a+1==b))&&(l1==l2 && l2==l3)){
        cout<<0;
    }
    else if(((a==b && l1==l2)||(a==c && l1==l3)||(b==c && l2==l3))  ||
            (a+1==b && l1==l2)||(b+1==a && l2==l1) || (a+1==c && l1==l3)||(c+1==a && l3==l1) ||
            (c+1==b && l3==l2)||(b+1==c && l2==l3) || (a+2==b && l1==l2)||(b+2==a && l2==l1) ||
            (a+2==c && l1==l3)||(c+2==a && l3==l1) || (c+2==b && l3==l2)||(b+2==c && l2==l3)){
        cout<<1;
    }
    else
        cout<<2;

    return 0;
}
