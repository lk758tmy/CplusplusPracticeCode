#include <iostream>
//辗转相除法求gcd
using namespace std;
int main()
{
    int a,b,r;
    cin>>a>>b;
    r=a%b;
    while(r!=0){
        a=b;
        b=r;
        r=a%b;            
    } 
    cout<<"gcd:"<<b;
    system("pause");
    return 0;
}
