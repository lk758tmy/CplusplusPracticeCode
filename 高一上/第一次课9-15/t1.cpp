//t1 计算长方形的面积和周长 
#include <iostream>
using namespace std;
int main()
{
    double a,b,c,s;
    cout<<"长方形的长="; 
    cin>>a;
    cout<<"长方形的宽=";
    cin>>b;
    
    c=2*a+2*b;
    s=a*b;
    
    cout<<"周长="<<c<<"面积="<<s<<endl;
    system("pause");
    return 0;
}
