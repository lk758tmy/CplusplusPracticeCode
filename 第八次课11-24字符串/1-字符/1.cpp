#include <iostream>
using namespace std;
int main(){
    double a,b;
    char x;
    cin>>a>>x>>b;
    if(x=='+')cout<<a+b<<'\n';
    if(x=='*')cout<<a*b<<'\n';
    if(x=='-')cout<<a-b<<'\n';
    if(x=='/')cout<<a/b<<'\n';
    system("pause");
    return 0;
}
