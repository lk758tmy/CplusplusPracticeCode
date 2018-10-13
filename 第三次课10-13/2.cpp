#include <iostream>
using namespace std;
int main()
{
    int i,s;
    s=0;//先"清零"，如果累乘，清“1” 
    for(i=1;i<=100;i++){//i++等价于i=i+1 
        s+=i;//等价于s=s+i 
    } 
    cout<<s<<endl;
    system("pause");
    return 0;
}
