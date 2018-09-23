//计算3位数各位数字之和 
#include <iostream>
using namespace std;
int main()
{
    unsigned int a;
    int x1,x2,x3,y;
    cin>>a;  
    /*
    x1=a/100;
    x2=a%100;
    x2=x2/10;
    x3=a%10;
    */
    x3=a/1%10;
    x2=a/10%10;
    x1=a/100%10;
    //这种方法更好 
    y=x1+x2+x3;  
    cout<<y<<endl;
    system("pause");
    return 0;
}
