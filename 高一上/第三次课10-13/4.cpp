//输入总人数和每人成绩，计算平均分 
#include <iostream>
using namespace std;
int main()
{
    int i,n;
    double x,s,avg;
    s=0;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>x;
        //此时可以将多个数据以空格隔开 一起输入 
        s=s+x;
    } 
    avg=s/n;
    cout<<avg<<endl;
    system("pause");
    return 0;
}
