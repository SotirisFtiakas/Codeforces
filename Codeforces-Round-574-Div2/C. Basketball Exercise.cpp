                        /* THIS IS THE CORRECT SOLUTION CODE. SOLUTION IS ACCEPTED */

#include <iostream>

using namespace std;

int n;

main()
{
    cin >> n;
    long long data[n][2];

    for(int i=0;i<n;i++){
        cin>>data[i][0];
    }
    for(int i=0;i<n;i++){
        cin>>data[i][1];
    }

    long long Dynamic[n][3];
    Dynamic[0][0] = data[0][0];
    Dynamic[0][1] = data[0][1];
    Dynamic[0][2] = 0;
    for(int i=1;i<n;i++){
        Dynamic[i][0] = max(Dynamic[i-1][1], Dynamic[i-1][2]) + data[i][0];
        Dynamic[i][1] = max(Dynamic[i-1][0], Dynamic[i-1][2]) + data[i][1];
        Dynamic[i][2] = max(Dynamic[i-1][0], max(Dynamic[i-1][1], Dynamic[i-1][2]));
    }

    cout << max(Dynamic[n-1][0], max(Dynamic[n-1][1], Dynamic[n-1][2]));
    return 0;
}

                        /* THIS IS THE OLD FALSE CODE. HERE THE TIME LIMIT IS EXCEEDED. */ 

/*#include <iostream>

using namespace std;

long long sum;
int n;

void Foo(long P1[],long P2[],int arr,int n,int i,int c,int skip){
    if(i>=n){
        if(c>sum){
            sum=c;
        }
        return;
    }
    if(skip!=0){
        if(arr==1){
            c=c+P1[i];
        }
        else{
            c=c+P2[i];
        }
    }
    if(skip==0){
        if (arr==1){
            Foo(P1,P2,1,n,i+1,c,1);
            Foo(P1,P2,1,n,i+2,c,0);
        }
        else{
            Foo(P1,P2,2,n,i+1,c,1);
            Foo(P1,P2,2,n,i+2,c,0);
        }
    }else {
        if (arr==1){
            Foo(P1,P2,2,n,i+1,c,1);
            Foo(P1,P2,1,n,i+2,c,1);
            Foo(P1,P2,2,n,i+1,c,0);
        }
        else{
            Foo(P1,P2,1,n,i+1,c,1);
            Foo(P1,P2,2,n,i+2,c,1);
            Foo(P1,P2,1,n,i+1,c,0);
        }
    }
    return;
}

int main()
{
    sum=0;
    cin>>n;
    long P1[n];
    long P2[n];
    for(int i=0;i<n;i++){
        cin>>P1[i];
    }
    for(int i=0;i<n;i++){
        cin>>P2[i];
    }
    Foo(P1,P2,1,n,0,0,1);
    Foo(P1,P2,2,n,0,0,1);
    cout<<sum;

    return 0;
}
*/
