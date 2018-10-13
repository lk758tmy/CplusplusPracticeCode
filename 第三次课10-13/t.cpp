#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
    int i,n,c;
    c=0;444
    cin>>n;
    for(i=2;i<=sqrt(n*1.0);i++){
        if(n%i==0)
            c=c+1;                        
    }
    if(c==0)
        cout<<"是质数"<<endl;
    else
        cout<<"不是质数"<<endl;
    system("pause");
    return 0;
}
