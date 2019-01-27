//t2 输入华氏温度 输出摄氏温度 
#include <iostream>
using namespace std;
int main()
{
    double f,c;
    cout<<"华氏温度 ";
    cin>>f;
    c=5*(f-32)/9;
    cout<<"摄氏温度 "<<c<<"\n"; 
    system("pause");
    return 0;
}
